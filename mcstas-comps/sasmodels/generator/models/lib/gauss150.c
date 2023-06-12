// Created by Andrew Jackson on 4/23/07

 #ifdef GAUSS_N
 # undef GAUSS_N
 # undef GAUSS_Z
 # undef GAUSS_W
 #endif
 #define GAUSS_N 150
 #define GAUSS_Z Gauss150Z
 #define GAUSS_W Gauss150Wt


// Note: using array size 152 rather than 150 so that it is a multiple of 4.
// Some OpenCL devices prefer that vectors start and end on nice boundaries.
constant double Gauss150Z[152]={
  	-0.9998723404457334,
  	-0.9993274305065947,
  	-0.9983473449340834,
  	-0.9969322929775997,
  	-0.9950828645255290,
  	-0.9927998590434373,
  	-0.9900842691660192,
  	-0.9869372772712794,
  	-0.9833602541697529,
  	-0.9793547582425894,
  	-0.9749225346595943,
  	-0.9700655145738374,
  	-0.9647858142586956,
  	-0.9590857341746905,
  	-0.9529677579610971,
  	-0.9464345513503147,
  	-0.9394889610042837,
  	-0.9321340132728527,
  	-0.9243729128743136,
  	-0.9162090414984952,
  	-0.9076459563329236,
  	-0.8986873885126239,
  	-0.8893372414942055,
  	-0.8795995893549102,
  	-0.8694786750173527,
  	-0.8589789084007133,
  	-0.8481048644991847,
  	-0.8368612813885015,
  	-0.8252530581614230,
  	-0.8132852527930605,
  	-0.8009630799369827,
  	-0.7882919086530552,
  	-0.7752772600680049,
  	-0.7619248049697269,
  	-0.7482403613363824,
  	-0.7342298918013638,
  	-0.7198995010552305,
  	-0.7052554331857488,
  	-0.6903040689571928,
  	-0.6750519230300931,
  	-0.6595056411226444,
  	-0.6436719971150083,
  	-0.6275578900977726,
  	-0.6111703413658551,
  	-0.5945164913591590,
  	-0.5776035965513142,
  	-0.5604390262878617,
  	-0.5430302595752546,
  	-0.5253848818220803,
  	-0.5075105815339176,
  	-0.4894151469632753,
  	-0.4711064627160663,
  	-0.4525925063160997,
  	-0.4338813447290861,
  	-0.4149811308476706,
  	-0.3959000999390257,
  	-0.3766465660565522,
  	-0.3572289184172501,
  	-0.3376556177463400,
  	-0.3179351925907259,
  	-0.2980762356029071,
  	-0.2780873997969574,
  	-0.2579773947782034,
  	-0.2377549829482451,
  	-0.2174289756869712,
  	-0.1970082295132342,
  	-0.1765016422258567,
  	-0.1559181490266516,
  	-0.1352667186271445,
  	-0.1145563493406956,
  	-0.0937960651617229,
  	-0.0729949118337358,
  	-0.0521619529078925,
  	-0.0313062657937972,
  	-0.0104369378042598,
  	0.0104369378042598,
  	0.0313062657937972,
  	0.0521619529078925,
  	0.0729949118337358,
  	0.0937960651617229,
  	0.1145563493406956,
  	0.1352667186271445,
  	0.1559181490266516,
  	0.1765016422258567,
  	0.1970082295132342,
  	0.2174289756869712,
  	0.2377549829482451,
  	0.2579773947782034,
  	0.2780873997969574,
  	0.2980762356029071,
  	0.3179351925907259,
  	0.3376556177463400,
  	0.3572289184172501,
  	0.3766465660565522,
  	0.3959000999390257,
  	0.4149811308476706,
  	0.4338813447290861,
  	0.4525925063160997,
  	0.4711064627160663,
  	0.4894151469632753,
  	0.5075105815339176,
  	0.5253848818220803,
  	0.5430302595752546,
  	0.5604390262878617,
  	0.5776035965513142,
  	0.5945164913591590,
  	0.6111703413658551,
  	0.6275578900977726,
  	0.6436719971150083,
  	0.6595056411226444,
  	0.6750519230300931,
  	0.6903040689571928,
  	0.7052554331857488,
  	0.7198995010552305,
  	0.7342298918013638,
  	0.7482403613363824,
  	0.7619248049697269,
  	0.7752772600680049,
  	0.7882919086530552,
  	0.8009630799369827,
  	0.8132852527930605,
  	0.8252530581614230,
  	0.8368612813885015,
  	0.8481048644991847,
  	0.8589789084007133,
  	0.8694786750173527,
  	0.8795995893549102,
  	0.8893372414942055,
  	0.8986873885126239,
  	0.9076459563329236,
  	0.9162090414984952,
  	0.9243729128743136,
  	0.9321340132728527,
  	0.9394889610042837,
  	0.9464345513503147,
  	0.9529677579610971,
  	0.9590857341746905,
  	0.9647858142586956,
  	0.9700655145738374,
  	0.9749225346595943,
  	0.9793547582425894,
  	0.9833602541697529,
  	0.9869372772712794,
  	0.9900842691660192,
  	0.9927998590434373,
  	0.9950828645255290,
  	0.9969322929775997,
  	0.9983473449340834,
  	0.9993274305065947,
  	0.9998723404457334,
  	0., // zero padding is ignored
  	0.  // zero padding is ignored
};

constant double Gauss150Wt[152]={
  	0.0003276086705538,
  	0.0007624720924706,
  	0.0011976474864367,
  	0.0016323569986067,
  	0.0020663664924131,
  	0.0024994789888943,
  	0.0029315036836558,
  	0.0033622516236779,
  	0.0037915348363451,
  	0.0042191661429919,
  	0.0046449591497966,
  	0.0050687282939456,
  	0.0054902889094487,
  	0.0059094573005900,
  	0.0063260508184704,
  	0.0067398879387430,
  	0.0071507883396855,
  	0.0075585729801782,
  	0.0079630641773633,
  	0.0083640856838475,
  	0.0087614627643580,
  	0.0091550222717888,
  	0.0095445927225849,
  	0.0099300043714212,
  	0.0103110892851360,
  	0.0106876814158841,
  	0.0110596166734735,
  	0.0114267329968529,
  	0.0117888704247183,
  	0.0121458711652067,
  	0.0124975796646449,
  	0.0128438426753249,
  	0.0131845093222756,
  	0.0135194311690004,
  	0.0138484622795371,
  	0.0141714592928592,
  	0.0144882814685445,
  	0.0147987907597169,
  	0.0151028518701744,
  	0.0154003323133401,
  	0.0156911024699895,
  	0.0159750356447283,
  	0.0162520081211971,
  	0.0165218992159766,
  	0.0167845913311726,
  	0.0170399700056559,
  	0.0172879239649355,
  	0.0175283451696437,
  	0.0177611288626114,
  	0.0179861736145128,
  	0.0182033813680609,
  	0.0184126574807331,
  	0.0186139107660094,
  	0.0188070535331042,
  	0.0189920016251754,
  	0.0191686744559934,
  	0.0193369950450545,
  	0.0194968900511231,
  	0.0196482898041878,
  	0.0197911283358190,
  	0.0199253434079123,
  	0.0200508765398072,
  	0.0201676730337687,
  	0.0202756819988200,
  	0.0203748563729175,
  	0.0204651529434560,
  	0.0205465323660984,
  	0.0206189591819181,
  	0.0206824018328499,
  	0.0207368326754401,
  	0.0207822279928917,
  	0.0208185680053983,
  	0.0208458368787627,
  	0.0208640227312962,
  	0.0208731176389954,
  	0.0208731176389954,
  	0.0208640227312962,
  	0.0208458368787627,
  	0.0208185680053983,
  	0.0207822279928917,
  	0.0207368326754401,
  	0.0206824018328499,
  	0.0206189591819181,
  	0.0205465323660984,
  	0.0204651529434560,
  	0.0203748563729175,
  	0.0202756819988200,
  	0.0201676730337687,
  	0.0200508765398072,
  	0.0199253434079123,
  	0.0197911283358190,
  	0.0196482898041878,
  	0.0194968900511231,
  	0.0193369950450545,
  	0.0191686744559934,
  	0.0189920016251754,
  	0.0188070535331042,
  	0.0186139107660094,
  	0.0184126574807331,
  	0.0182033813680609,
  	0.0179861736145128,
  	0.0177611288626114,
  	0.0175283451696437,
  	0.0172879239649355,
  	0.0170399700056559,
  	0.0167845913311726,
  	0.0165218992159766,
  	0.0162520081211971,
  	0.0159750356447283,
  	0.0156911024699895,
  	0.0154003323133401,
  	0.0151028518701744,
  	0.0147987907597169,
  	0.0144882814685445,
  	0.0141714592928592,
  	0.0138484622795371,
  	0.0135194311690004,
  	0.0131845093222756,
  	0.0128438426753249,
  	0.0124975796646449,
  	0.0121458711652067,
  	0.0117888704247183,
  	0.0114267329968529,
  	0.0110596166734735,
  	0.0106876814158841,
  	0.0103110892851360,
  	0.0099300043714212,
  	0.0095445927225849,
  	0.0091550222717888,
  	0.0087614627643580,
  	0.0083640856838475,
  	0.0079630641773633,
  	0.0075585729801782,
  	0.0071507883396855,
  	0.0067398879387430,
  	0.0063260508184704,
  	0.0059094573005900,
  	0.0054902889094487,
  	0.0050687282939456,
  	0.0046449591497966,
  	0.0042191661429919,
  	0.0037915348363451,
  	0.0033622516236779,
  	0.0029315036836558,
  	0.0024994789888943,
  	0.0020663664924131,
  	0.0016323569986067,
  	0.0011976474864367,
  	0.0007624720924706,
  	0.0003276086705538,
  	0., // zero padding is ignored
  	0.  // zero padding is ignored
};

#pragma acc declare copyin( Gauss150Wt[0:150], Gauss150Z[0:150] )