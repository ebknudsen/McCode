Compilation for CPU parallelisation:

	    pgcc -ta=multicore -Minfo=accel templateLaue.c -o templateLaue.out


PGC-W-0118-Function Table_File_List_store does not contain a return statement (/Applications/McStas-3.0beta03.app/Contents/Resources/mcstas/3.0beta03/samples/Single_crystal.comp: 569)
mccode_main:
     28, include "mccode-r.h"
         687, include "mcstas-r.h"
              222, include "mccode-r.c"
                  3985, Generating Multicore code
                      3986, #pragma acc loop gang
box_intersect:
     28, include "mccode-r.h"
         687, include "mcstas-r.h"
              222, include "mccode-r.c"
cylinder_intersect:
     28, include "mccode-r.h"
         687, include "mcstas-r.h"
              222, include "mccode-r.c"
sphere_intersect:
     28, include "mccode-r.h"
         687, include "mcstas-r.h"
              222, include "mccode-r.c"
norm_func:
     28, include "mccode-r.h"
PGC/x86-64 OSX 17.10-0: compilation completed with warnings



Return of j in internal hkl_search loop and reduction issues, these numerical issues areise:

Instrument parameters for templateLaue (templateLaue.instr)
Set value of instrument parameter reflections (string) [default='leucine.lau']:

[templateLaue] Initialize
Opening input file '/Applications/McStas-3.0beta03.app/Contents/Resources/mcstas/3.0beta03//data/leucine.lau' (Table_Read_Offset)
Single_crystal: leucine.lau structure a=14.66 b=5.324 c=9.606 aa=90 bb=94.06 cc=90 V0=747.865
Single_crystal: sample: Read 4912 reflections from file 'leucine.lau'
Single_crystal: sample: Vc=747.865 [Angs] sigma_abs=25.024 [barn] sigma_inc=4175.6 [barn] reflections=leucine.lau
Single_crystal: Error: Illegal tau search (r=3.71302, sum=7.80398, j=5, tau_count=5).
Single_crystal: Error: Illegal tau search (r=-1.33316, sum=68.2908, j=0, tau_count=0).
Single_crystal: Error: Illegal tau search (r=1.7996, sum=326.047, j=0, tau_count=0).
Single_crystal: Error: Illegal tau search (r=1.16501, sum=7.36381, j=1, tau_count=0).
Single_crystal: Error: Illegal tau search (r=3.35705, sum=2.23417e-281, j=0, tau_count=0).
Single_crystal: Error: Illegal tau search (r=-0.589693, sum=3.4007e-07, j=2, tau_count=2).
Single_crystal: Error: Illegal tau search (r=2.28769, sum=21.7031, j=3, tau_count=3).
Single_crystal: Error: Illegal tau search (r=2.5413, sum=0.000529522, j=2, tau_count=2).
Single_crystal: Error: Illegal tau search (r=0.0337907, sum=361.458, j=0, tau_count=0).
Single_crystal: Error: Illegal tau search (r=0.709058, sum=22.211, j=3, tau_count=3).
Single_crystal: Error: Illegal tau search (r=0.818591, sum=0.367143, j=3, tau_count=3).
Single_crystal: Error: Illegal tau search (r=-0.59488, sum=0.000568495, j=1, tau_count=1).
Single_crystal: Error: Illegal tau search (r=1.13694, sum=0.428094, j=2, tau_count=2).
Single_crystal: Error: Illegal tau search (r=-2.00772, sum=2.85065, j=4, tau_count=4).
Single_crystal: Error: Illegal tau search (r=0.935414, sum=0.000144386, j=2, tau_count=2).

...


