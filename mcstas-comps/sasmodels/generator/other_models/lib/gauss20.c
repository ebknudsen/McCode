// Created by Andrew Jackson on 4/23/07

 #ifdef GAUSS_N
 # undef GAUSS_N
 # undef GAUSS_Z
 # undef GAUSS_W
 #endif
 #define GAUSS_N 20
 #define GAUSS_Z Gauss20Z
 #define GAUSS_W Gauss20Wt

// Gaussians
constant double Gauss20Wt[20]={
	.0176140071391521,
	.0406014298003869,
	.0626720483341091,
	.0832767415767047,
	.10193011981724,
	.118194531961518,
	.131688638449177,
	.142096109318382,
	.149172986472604,
	.152753387130726,
	.152753387130726,
	.149172986472604,
	.142096109318382,
	.131688638449177,
	.118194531961518,
	.10193011981724,
	.0832767415767047,
	.0626720483341091,
	.0406014298003869,
	.0176140071391521
};

constant double Gauss20Z[20]={
	-.993128599185095,
	-.963971927277914,
	-.912234428251326,
	-.839116971822219,
	-.746331906460151,
	-.636053680726515,
	-.510867001950827,
	-.37370608871542,
	-.227785851141645,
	-.076526521133497,
	.0765265211334973,
	.227785851141645,
	.37370608871542,
	.510867001950827,
	.636053680726515,
	.746331906460151,
	.839116971822219,
	.912234428251326,
	.963971927277914,
	.993128599185095
};

#pragma acc declare copyin( Gauss20Wt[0:20], Gauss20Z[0:20] )