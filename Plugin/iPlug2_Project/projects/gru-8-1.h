/**
 * Autogenerated header file for gru-8-1
 * neural network model parameters.
 * 
 * Created on: 03/10/2022 at: 10:19
 * By Michael Holmes
*/

#pragma once
#include "layers.h"

template<typename T>
class Gru_8_1
{
public:
	const static int h = 8;
	const static int d = 1;
	const static int layers = 1;

	FccLayer<T, h, d> f;
	GruLayer<T, h, d> l0;

	Gru_8_1() {
		l0.Wir <<  1.8422728 , 0.06536334, 0.53276914, 0.26808965, 3.2612278 ,-1.4393789 ,  2.1016226 , 0.0414125 ;
		l0.Wiz << -7.756088 ,-1.4953905,-3.8684738, 4.6167016, 4.58307  ,-0.8138322, -4.6301904,-2.2786505;
		l0.Win << -0.7007015 ,-1.4178905 , 0.64452296,-0.2210694 , 1.0894285 ,-0.14391007, -0.99526477, 0.38442498;

		l0.Whr << -0.23565178,-0.694071  ,-0.0326197 ,-0.15809163,-0.43013552,-0.05316626,  0.28566492,-1.4644483 ,-1.0644906 , 0.38536525,-0.1140361 , 0.24906132, -0.3875664 ,-0.20636629,-0.46147266, 1.1644241 , 0.15455899,-0.10406547, -0.32364643, 0.07955568, 0.8037264 , 0.27691355,-0.22610946, 0.08261491, -0.5348759 ,-0.09406973, 0.34808257, 0.15508215,-0.0778479 ,-0.11745022, -0.27467835, 0.89903665, 0.06596686,-0.08486445, 0.39866087, 0.17969702,  1.1569095 , 0.11874953, 0.12596682, 0.54448533, 0.68177295,-0.41527992, -0.2503122 ,-0.3762489 , 0.3111119 , 0.02365096,-0.15650362,-0.97859216, -1.0052335 , 0.3098109 ,-0.15737268, 0.6255305 ,-0.29015484,-0.10931079, -0.64508456, 0.5028314 , 0.44221586,-0.2708953 ,-0.6060635 , 0.6739304 , -0.81624323, 0.19958547,-0.09645966, 0.18730524;
		l0.Whz << -5.7591575e-01, 2.7933617e+00,-6.0637563e-01, 1.6160179e+00, -1.7378628e+00,-3.4183294e-01,-8.6593187e-01, 5.3387707e-01,  3.5702711e-01,-5.5918221e+00,-6.0708338e-01, 7.6069814e-01,  2.2148263e+00, 1.3532813e+00,-2.5753217e+00,-6.9400053e+00,  1.2176763e+00,-2.5799265e+00,-2.5478952e+00,-5.2769184e+00, -1.4842126e+00,-1.3328142e+00,-1.8208304e-02, 2.4201784e+00,  3.1130164e+00,-4.8209662e+00,-4.8524599e+00, 3.7705221e+00,  2.4588325e+00,-1.0286270e+00,-9.1481429e-01,-4.8897462e+00, -4.8931843e-01,-2.9026966e+00, 2.2113371e+00, 8.4814972e-01,  2.5554147e+00, 1.1995595e+00, 1.1403565e+00,-2.9846910e-01, -1.3424823e-01, 2.5951715e+00, 3.8792053e-03,-1.5664171e+00,  1.0272631e-01,-2.5013452e+00,-1.9051188e+00, 1.7435400e-01,  9.1458577e-01, 7.3159283e-01,-1.8132483e+00, 5.3983808e+00, -1.9895420e+00, 1.5436152e+00, 2.1047205e-01,-2.4649429e+00, -2.1668859e-01, 1.3615047e+00, 2.4244182e-01,-4.8337660e+00, -1.6406151e+00,-1.3585048e+00,-4.2833313e-01, 1.1039665e+00;
		l0.Whn <<  0.68930936,-0.05959653, 0.49571276,-0.48260447, 0.19409229,-0.04548409,  0.20444775,-0.868169  ,-1.6811857 , 0.69863945,-0.19237727, 0.5623268 ,  0.6590874 ,-0.27413547,-0.30489817, 0.8076056 ,-0.19453043, 0.15190354,  0.12216642,-0.0742645 , 0.6073775 ,-0.40256187, 0.16502737,-0.07105959, -0.46019244, 0.2915875 , 0.42883772, 0.96775645,-0.2825884 , 0.46873504, -0.05730547,-0.10599623, 0.6430817 , 0.24332906,-0.01005517,-0.40051383,  0.13871016, 0.17790802, 0.03852069, 0.1589372 , 0.44994912, 0.18803549, -0.19840954,-0.08131509,-0.6543578 , 0.03179726, 0.315373  , 0.04269245,  0.69182646,-0.6515445 , 0.08510418,-0.33019838,-0.01056743, 0.18956953,  0.3203566 ,-0.3294103 ,-0.8854215 ,-0.06995922,-0.1150611 ,-0.57172114, -0.22518241,-0.42360073,-0.08277242,-0.0824227 ;

		l0.bir <<  0.20059939, 0.35497966, 0.4487227 , 0.6770033 ,-0.2889863 , 0.34379587, -0.03718618, 0.5926613 ;
		l0.biz <<  1.4279454 ,-0.761412  , 1.1305702 , 2.2894464 ,-1.5549881 , 0.6903877 ,  0.10189016,-0.8003124 ;
		l0.bin <<  0.03243531,-0.19432385,-0.29295477,-0.10979381,-0.17332792,-0.12701067, -0.22506069, 0.04429289;

		l0.bhr << -0.19131124, 0.36597708, 0.21387659, 0.26005018, 0.20031083, 0.27904812, -0.04081839, 0.26956996;
		l0.bhz <<  0.84189117,-0.87809503, 1.2497293 , 2.3331912 ,-1.6105835 , 1.181751  , -0.2160782 ,-0.8528844 ;
		l0.bhn << -0.04314838,-0.00085158,-0.27204478, 0.09373655, 0.38045606,-0.09028518, -0.37312463,-0.34707478;

		l0.htn1 << 0.,0.,0.,0.,0.,0.,0.,0.;

		f.A <<  0.4054227 , 0.20639338, 0.267022  , 0.08973229,-0.5035806 ,-0.472147  ,  0.34590602, 0.46224377;
		f.b << 0.18217367;
	}

	void apply_model(T* x, T* y) {
		l0.apply_layer(*x);
		*y=f.apply_layer(l0.ht);
	}
};