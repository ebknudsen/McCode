#!/bin/bash
#
# Script for easily getting profile data for an instrument from the examples
#
# Preferably run on Linux where both gprof and google profiling tools are
# available
#

if [ "x$MCSTAS" = "x" ]; then
    echo "Please define the MCSTAS environment variable for locating instrs!"
    exit
fi

if [ "x$1" = "x" ]; then
    echo "Please give an input instrument filename"
    exit
fi

FILE=$MCSTAS/examples/$1
    
if [ -f $FILE ]; then
    echo "File $FILE exists, proceeding!"
    INSTR=`basename -s.instr $1`
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
  echo "Compilig for google performance tool profiling..."
  export MCSTAS_CFLAGS_OVERRIDE="-g -lm /usr/lib/libtcmalloc_and_profiler.so.4"
  mcrun -c -n0 $INSTR.instr &> $INSTR/googlemem_stdout_stderr
  echo "Compile done. Starting simulation:"
  export HEAPPROFILE=$INSTR/heapprof
  export CPUPROFILE=$INSTR/cpuprof
  ./$INSTR.out $2 -n1e6 -d$INSTR/googlemem_outputdir
  google-pprof ./$INSTR.out ./$INSTR/heapprof* --web &
  sleep 10
  google-pprof ./$INSTR.out ./$INSTR/cpuprof* --web
  
else
  echo "File $FILE does not exist."
  exit
fi
