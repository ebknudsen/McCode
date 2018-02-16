# the name of the target operating system
SET(CMAKE_SYSTEM_NAME "Linux")
SET(ARCH   "amd64")

# OpenCL
set(OPENCL_INCLUDE "CL/cl.h")
set(OPENCL_CFLAGS "-lOpenCL")

# Commands for running various external tools
set(BROWSER "xdg-open")
set(VRMLVIEW "whitedune")
set(MPICC "mpicc")
set(MPIRUN "mpirun")
set(PGPLOT "pgxwin_server")
set(GNUPLOT "gnuplot")

# Plotting options

set(PLOTTER "PGPLOT")
set(PGDEV "/xwin")
set(GNUDEV "wxt")

# Suffix for executables
set(EXE "out")

