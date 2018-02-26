/*******************************************************************************
*
* McXtrace, X-ray ray-tracing package
*         Copyright (C) 1997-2009, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Runtime: share/mcxtrace-r.h
*
* %Identification
* Written by: KN
* Date:    Aug 29, 1997
* Release: McXtrace X.Y
* Version: $Revision$
*
* Runtime system header for McXtrace.
*
* In order to use this library as an external library, the following variables
* and macros must be declared (see details in the code)
*
*   struct mcinputtable_struct mcinputtable[];
*   int mcnumipar;
*   char mcinstrument_name[], mcinstrument_source[];
*   int mctraceenabled, mcdefaultmain;
*   extern MCNUM  mccomp_storein[];
*   extern MCNUM  mcAbsorbProp[];
*   extern MCNUM  mcScattered;
*   #define MCCODE_STRING "the McXtrace version"
*
* Usage: Automatically embbeded in the c code.
*
*******************************************************************************/

#ifndef MCXTRACE_R_H
#define MCXTRACE_R_H 1

/* Following part is only embedded when not redundant with mcstas.h ========= */

#ifndef MCCODE_H

#define CELE     1.602176487e-19   /* [C] Elementary charge CODATA 2006*/
#define M_C      299792458         /* [m/s] speed of light CODATA 2006*/
#define E2K      0.506773091264796 /* Convert k[1/AA] to E [keV] (CELE/(HBAR*M_C)*1e-10)*1e3 */
#define K2E      1.97326972808327  /*Convert E[keV] to k[1/AA] (1e10*M_C*HBAR/CELE)/1e3 */
#define RE       2.8179402894e-5   /*[AA] Thomson scattering length*/

#define SCATTER do {DEBUG_SCATTER(); SCATTERED++;} while(0)
#define RESTORE_XRAY(index, ...) RESTORE=index;

#define ALLOW_BACKPROP \
  do { \
    mcallowbackprop = 1; \
  } while(0)

#define DISALLOW_BACKPROP \
  do { \
    mcallowbackprop = 0; \
  } while(0)

/*An interrupt a'la mcMagnet should be inserted below if there's non-zero permeability*/
/*perhaps some kind of PROP_POL*/

#define mcPROP_DL(dl) \
  do { \
    MCNUM k=sqrt( scalar_prod(kx,ky,kz,kx,ky,kz));\
    x += (dl)*kx/k;\
    y += (dl)*ky/k;\
    z += (dl)*kz/k;\
    phi += 1e10*k*(dl);\
    t += (dl)/((double)M_C);\
  }while (0)

/*adapted from PROP_DT(dt)*//*{{{*/
#define PROP_DL(dl) \
  do{ \
    if( dl <0 && mcallowbackprop == 0) { mcinstrument->counter_AbsorbProp[INDEX_CURRENT_COMP]++; ABSORB; }; \
    mcPROP_DL(dl); \
    DISALLOW_BACKPROP;\
  } while (0)

#define PROP_Z0 \
  mcPROP_P0(z)

#define PROP_X0 \
  mcPROP_P0(x)

#define PROP_Y0 \
  mcPROP_P0(y)

#define mcPROP_P0(P) \
  do { \
    MCNUM mc_dl,mc_k; \
    if(k ## P == 0) { mcinstrument->counter_AbsorbProp[INDEX_CURRENT_COMP]++; ABSORB; }; \
    mc_k=sqrt(scalar_prod(kx,ky,kz,kx,ky,kz));\
    mc_dl= - P * mc_k / k ## P;\
    if(mc_dl<0 && mcallowbackprop==0) { mcinstrument->counter_AbsorbProp[INDEX_CURRENT_COMP]++; ABSORB; };\
    PROP_DL(mc_dl);\
  } while(0)



mcparticle mcsetstate(double x, double y, double z, double kx, double ky, double kz,
    double phi, double t, double Ex, double Ey, double Ez, double p);

#ifdef DEBUG

#define DEBUG_STATE() if(!mcdotrace); else \
  printf("STATE: %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g\n", \
      x,y,z,kx,ky,kz,phi,t,Ex,Ey,Ez,p);
#define DEBUG_SCATTER() if(!mcdotrace); else \
  printf("SCATTER: %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g\n", \
      x,y,z,kx,ky,kz,phi,t,Ex,Ey,Ez,p);

#else

#define DEBUG_STATE()
#define DEBUG_SCATTER()

#endif

#endif /* !MCCODE_H */

#endif /* MCXTRACE_R_H */
