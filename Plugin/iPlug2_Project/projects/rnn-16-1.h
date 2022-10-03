/**
 * Autogenerated header file for rnn-16-1
 * neural network model parameters.
 * 
 * Created on: 03/10/2022 at: 10:19
 * By Michael Holmes
*/

#pragma once
#include "layers.h"

template<typename T>
class Rnn_16_1
{
public:
	const static int h = 16;
	const static int d = 1;
	const static int layers = 1;

	FccLayer<T, h, d> f;
	RnnLayer<T, h, d> l0;

	Rnn_16_1() {
		l0.Wih << -1.4913248 ,-0.4739    ,-0.60757124,-0.21822396, 1.1537609 ,-0.18661845, -1.1404213 ,-0.0428502 , 0.07048593,-0.08142574,-1.6199111 ,-0.00686951,  0.62151724,-1.746156  ,-0.56873584,-0.35573813;

		l0.Whh <<  0.10118648,-0.19523866, 0.28896505,-0.19165677,-0.19669263,-0.27254552, -0.20017678,-0.21302927,-0.21576506, 0.15971015, 0.29829365, 0.06733719, -0.20880008, 0.12455203,-0.09775402,-0.00939001, 0.12934291, 0.2539225 , -0.00548192,-0.03465988,-0.06597004, 0.10024522,-0.1737921 ,-0.11830971,  0.13491611, 0.10383102, 0.20325017,-0.05959373, 0.19142736,-0.05645894, -0.1114085 ,-0.12976891, 0.37647504,-0.03718686,-0.0675249 , 0.00784701, -0.19825226,-0.28500825,-0.13271421,-0.28114787,-0.00535817, 0.26372975, -0.19233048, 0.53203046,-0.29785743,-0.24129039, 0.1420732 ,-0.2196712 ,  0.01126648,-0.00925383,-0.11354158,-0.20176654,-0.15870339, 0.26764122, -0.10481827, 0.32757258, 0.20368071, 0.04036304, 0.07525954,-0.07516991,  0.02526874,-0.01832566,-0.27084434, 0.10403092,-0.18680222, 0.13512754, -0.06780451, 0.4340088 , 0.17040978, 0.503136  , 0.25583205, 0.3264902 ,  0.31781888,-0.2624617 , 0.17215702,-0.8081922 ,-0.03003691, 0.32877406, -0.00483557, 0.13586405, 0.03949073, 0.02286069,-0.09457576, 0.11504176,  0.0036659 , 0.07607618, 0.0103316 , 0.27673024, 0.1271985 , 0.04866765, -0.21606587,-0.21440233, 0.06181891, 0.17821506, 0.00236751, 0.14097466, -0.33569995, 0.16495611,-0.34734178, 0.16838118, 0.22173302, 0.39178538,  0.11720143, 0.24104828, 0.34787005,-0.4738992 , 0.04105418,-0.7513249 ,  0.29793885, 0.33890897,-0.2474902 , 0.09477843, 0.22696756,-0.2822859 ,  0.13336794, 0.18517274, 0.23609634, 0.10849535, 0.15498497, 0.40496695,  0.29251578,-0.17173631, 0.04001404,-0.0365118 , 0.2014033 ,-0.10572884, -0.02846891,-0.04264395,-0.19318788, 0.08065162, 0.10404059,-0.20038855, -0.20585223, 0.4222738 , 0.02829809, 0.51717925, 0.35029173,-0.11187766, -0.05091909,-0.32676435,-0.2540951 ,-0.00830569, 0.18918876,-0.00936243,  0.19399846,-0.08479563,-0.14394908, 0.10865423,-0.14530547,-0.07131059,  0.07256208,-0.02471664,-0.39000246,-0.05797306, 0.08786409, 0.28506514, -0.28864804,-0.24836802,-0.03730955,-0.00526272, 0.00451213,-0.13731836, -0.02252912, 0.2691405 , 0.02681558, 0.15062822, 0.33768207, 0.3918975 , -0.05969258, 0.15562542, 0.07286802,-0.3192768 , 0.01529647, 0.12374137,  0.18036903,-0.12268783,-0.15507016,-0.12202727, 0.11357595,-0.21442798, -0.03372317,-0.24693124, 0.02493656,-0.00619192,-0.43439615, 0.24839643,  0.08989293, 0.14611022,-0.26154968, 0.1190556 , 0.02913293,-0.06360877, -0.00118442,-0.0070261 , 0.11839145, 0.19863637,-0.23527871, 0.08460705,  0.07799287, 0.19140719,-0.14362869,-0.38081247,-0.12001511,-0.26563838, -0.00098113, 0.16099827,-0.5342383 , 0.00617757, 0.3655032 ,-0.08297572,  0.1967778 , 0.10884567,-0.20871618,-0.04912961, 0.20811433, 0.3100656 ,  0.158829  ,-0.10550074, 0.17335127,-0.17313942, 0.222096  , 0.0784567 , -0.03266315, 0.1801881 , 0.17457217,-0.14742294,-0.06125721, 0.06637985, -0.12245542, 0.13820587, 0.24109855, 0.04379351,-0.3100912 , 0.13463703, -0.01051914, 0.17635106,-0.09692288, 0.05432935,-0.09098662,-0.19135602,  0.23082554,-0.12689914,-0.04259663, 0.23201533,-0.24081855, 0.13433303, -0.08635767, 0.25510392, 0.07027879, 0.02511711, 0.08667939,-0.28071296,  0.07435109, 0.03155608,-0.00937301, 0.08705621;

		l0.bih <<  0.10262958, 0.12615907, 0.12195288, 0.2667244 ,-0.09864095,-0.09453611, -0.08133453, 0.02782663, 0.20295161,-0.15293193,-0.11235432, 0.2054224 ,  0.17347729,-0.1745171 ,-0.05264564,-0.06696098;

		l0.bhh <<  0.0989298 , 0.20352452,-0.05465235,-0.09218705,-0.02724542, 0.13166985, -0.10585438, 0.01226206,-0.22425371,-0.10681759, 0.17652795, 0.03839571, -0.16216639, 0.17909697, 0.0500813 , 0.03160189;

		l0.htn1 << 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.;

		f.A <<  0.32577193,-0.30402717, 0.10666966,-0.17957686,-0.24072076,-0.1486021 ,  0.3551037 ,-0.0125639 , 0.03574394, 0.05651243, 0.21049358,-0.1449532 ,  0.17130363, 0.15384813,-0.3210971 ,-0.20824488;
		f.b << 0.11415193;
	}

	void apply_model(T* x, T* y) {
		l0.apply_layer(*x);
		*y=f.apply_layer(l0.ht);
	}
};