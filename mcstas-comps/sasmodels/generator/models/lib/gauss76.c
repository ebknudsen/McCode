#ifndef GAUSS76
#define GAUSS76

// Created by Andrew Jackson on 4/23/07

 #ifdef GAUSS_N
 # undef GAUSS_N
 # undef GAUSS_Z
 # undef GAUSS_W
 #endif
 #define GAUSS_N 76
 #define GAUSS_Z Gauss76Z
 #define GAUSS_W Gauss76Wt

// Gaussians
constant double Gauss76Wt[76] = {
	.00126779163408536,		//0
	.00294910295364247,
	.00462793522803742,
	.00629918049732845,
	.00795984747723973,
	.00960710541471375,
	.0112381685696677,
	.0128502838475101,
	.0144407317482767,
	.0160068299122486,
	.0175459372914742,		//10
	.0190554584671906,
	.020532847967908,
	.0219756145344162,
	.0233813253070112,
	.0247476099206597,
	.026072164497986,
	.0273527555318275,
	.028587223650054,
	.029773487255905,
	.0309095460374916,		//20
	.0319934843404216,
	.0330234743977917,
	.0339977794120564,
	.0349147564835508,
	.0357728593807139,
	.0365706411473296,
	.0373067565423816,
	.0379799643084053,
	.0385891292645067,
	.0391332242205184,		//30
	.0396113317090621,
	.0400226455325968,
	.040366472122844,
	.0406422317102947,
	.0408494593018285,
	.040987805464794,
	.0410570369162294,
	.0410570369162294,
	.040987805464794,
	.0408494593018285,		//40
	.0406422317102947,
	.040366472122844,
	.0400226455325968,
	.0396113317090621,
	.0391332242205184,
	.0385891292645067,
	.0379799643084053,
	.0373067565423816,
	.0365706411473296,
	.0357728593807139,		//50
	.0349147564835508,
	.0339977794120564,
	.0330234743977917,
	.0319934843404216,
	.0309095460374916,
	.029773487255905,
	.028587223650054,
	.0273527555318275,
	.026072164497986,
	.0247476099206597,		//60
	.0233813253070112,
	.0219756145344162,
	.020532847967908,
	.0190554584671906,
	.0175459372914742,
	.0160068299122486,
	.0144407317482767,
	.0128502838475101,
	.0112381685696677,
	.00960710541471375,		//70
	.00795984747723973,
	.00629918049732845,
	.00462793522803742,
	.00294910295364247,
	.00126779163408536		//75 (indexed from 0)
};

constant double Gauss76Z[76] = {
	-.999505948362153,		//0
	-.997397786355355,
	-.993608772723527,
	-.988144453359837,
	-.981013938975656,
	-.972229228520377,
	-.961805126758768,
	-.949759207710896,
	-.936111781934811,
	-.92088586125215,
	-.904107119545567,		//10
	-.885803849292083,
	-.866006913771982,
	-.844749694983342,
	-.822068037328975,
	-.7980001871612,
	-.77258672828181,
	-.74587051350361,
	-.717896592387704,
	-.688712135277641,
	-.658366353758143,		//20
	-.626910417672267,
	-.594397368836793,
	-.560882031601237,
	-.526420920401243,
	-.491072144462194,
	-.454895309813726,
	-.417951418780327,
	-.380302767117504,
	-.342012838966962,
	-.303146199807908,		//30
	-.263768387584994,
	-.223945802196474,
	-.183745593528914,
	-.143235548227268,
	-.102483975391227,
	-.0615595913906112,
	-.0205314039939986,
	.0205314039939986,
	.0615595913906112,
	.102483975391227,			//40
	.143235548227268,
	.183745593528914,
	.223945802196474,
	.263768387584994,
	.303146199807908,
	.342012838966962,
	.380302767117504,
	.417951418780327,
	.454895309813726,
	.491072144462194,		//50
	.526420920401243,
	.560882031601237,
	.594397368836793,
	.626910417672267,
	.658366353758143,
	.688712135277641,
	.717896592387704,
	.74587051350361,
	.77258672828181,
	.7980001871612,	//60
	.822068037328975,
	.844749694983342,
	.866006913771982,
	.885803849292083,
	.904107119545567,
	.92088586125215,
	.936111781934811,
	.949759207710896,
	.961805126758768,
	.972229228520377,		//70
	.981013938975656,
	.988144453359837,
	.993608772723527,
	.997397786355355,
	.999505948362153		//75
};


#pragma acc declare copyin(Gauss76Wt[0:76], Gauss76Z[0:76])

#endif // GAUSS76
