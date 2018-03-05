#!/bin/bash
#
# Script for easily getting profile data for an instrument from the examples
#
# Preferably run on Linux where both gprof and google profiling tools are
# available
#

if [ "x$1" = "x" ]; then
    echo "Please give an input instrument filename"
    exit
fi

DIRNAME=`dirname $1`

if [ "x$DIRNAME" = "x" ]; then
    if [ "x$MCSTAS" = "x" ]; then
	echo "Please define the MCSTAS environment variable for locating instrs!"
	exit
    else
	FILE=$MCSTAS/examples/$1
    fi
else
    FILE=$1;
fi

if [ -f $FILE ]; then
    echo "File $FILE exists, proceeding!"
    INSTR=`basename $1 .instr`
    if [ -f $INSTR.instr ]; then
	echo "Removing existing output data!"
	rm -rf $INSTR*
    fi
    cp $FILE $INSTR.instr

  echo
  echo "Compilig for gprof profiling..."
  export MCSTAS_CFLAGS_OVERRIDE="-g -lm -pg"
  mkdir $INSTR
  mcrun -c -n0 $INSTR.instr &> $INSTR/gprof_stdout_stderr  
  echo "Compile done. Starting simulation:"
  mcrun $INSTR.instr $2 -n1e6 -d$INSTR/gprof_outputdir
  gprof $INSTR.out gmon.out > $INSTR/gprof_analysis.txt
  mv gmon.out $INSTR/
  echo "Compilig for google performance tool profiling..."
  export MCSTAS_CFLAGS_OVERRIDE="-g -lm -L/projects/p_gpuhack18_5/lib/ -ltcmalloc_and_profiler"
  mcrun -c -n0 $INSTR.instr &> $INSTR/googlemem_stdout_stderr
  echo "Compile done. Starting simulation:"
  export HEAPPROFILE=$INSTR/heapprof
  export CPUPROFILE=$INSTR/cpuprof
  ./$INSTR.out $2 -n1e6 -d$INSTR/googlemem_outputdir
  pprof ./$INSTR.out ./$INSTR/heapprof* --svg > $INSTR/heapprof.svg
  sleep 10
  pprof ./$INSTR.out ./$INSTR/cpuprof* --svg > $INSTR/cpuprof.svg
  
else
  echo "File $FILE does not exist."
  exit
fi
