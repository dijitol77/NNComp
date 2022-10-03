/**
 * Autogenerated header file for rnn-32-1
 * neural network model parameters.
 * 
 * Created on: 03/10/2022 at: 10:19
 * By Michael Holmes
*/

#pragma once
#include "layers.h"

template<typename T>
class Rnn_32_1
{
public:
	const static int h = 32;
	const static int d = 1;
	const static int layers = 1;

	FccLayer<T, h, d> f;
	RnnLayer<T, h, d> l0;

	Rnn_32_1() {
		l0.Wih <<  2.0476494 , 0.417433  ,-0.4237956 ,-0.21461171, 0.1587446 , 0.16488978, -0.3380759 , 2.3116338 , 0.02285562,-0.6242827 ,-0.1059261 , 0.3328389 ,  0.65383416, 0.08837145,-0.02448529, 0.2455586 ,-0.34838542,-0.06795201,  1.3396904 ,-0.01611339, 0.25330815,-0.29858002, 0.33601767, 0.26253003, -0.21985385,-0.01707049,-0.9232313 ,-0.36322618,-0.20637543,-0.26528382, -0.81364983,-0.0200811 ;

		l0.Whh <<  9.84360725e-02,-3.49575460e-01,-1.11592725e-01,-2.15506107e-01,  3.00375283e-01,-1.47640988e-01, 8.20664410e-03, 3.81787568e-01,  5.45875207e-02, 1.05886795e-01,-1.47299349e-01,-1.03266068e-01,  2.99445897e-01, 8.92656371e-02,-6.02942035e-02,-5.39565533e-02, -1.53719231e-01,-2.65763372e-01, 1.30594686e-01,-1.65151343e-01, -2.46610001e-01, 2.41979286e-02,-1.32685810e-01,-2.04458699e-01,  2.71337964e-02,-1.58661336e-01, 3.01343858e-01, 2.14961439e-01, -1.63494989e-01,-2.90004194e-01, 9.49261617e-03,-1.72238395e-01,  6.61947504e-02, 1.08827956e-01,-1.97785050e-01,-2.00875141e-02, -1.82510376e-01,-6.24371693e-02,-2.90235821e-02,-4.93969303e-03, -7.38645345e-02, 2.28999928e-01, 4.54274081e-02, 2.07240060e-02, -1.32201999e-01,-1.45932093e-01,-1.57057285e-01, 1.69960707e-01,  3.03765275e-02,-8.38871673e-02, 2.22521536e-02,-9.47209541e-03,  1.97387695e-01,-4.82272319e-02,-2.17521846e-01,-9.65701044e-02, -1.04298275e-02, 1.58479884e-01, 5.21342922e-03,-7.09379762e-02, -7.48616159e-02,-1.87172238e-02, 6.06344417e-02,-5.00110984e-02,  9.17314440e-02, 1.70065671e-01,-9.19726957e-03,-3.08482684e-02, -3.81004177e-02,-1.36782691e-01, 1.26735806e-01, 4.57301624e-02,  5.71744293e-02,-2.18066975e-01,-1.59218475e-01, 4.93636727e-02, -2.23374635e-01, 1.13106392e-01,-8.44017491e-02, 1.30762812e-02,  3.86643037e-02,-1.51952868e-02, 1.80416286e-01, 7.23453909e-02, -1.33725956e-01, 9.13258344e-02,-9.77981240e-02, 1.85285106e-01,  8.04799329e-03, 5.87825440e-02, 2.59296317e-02, 1.86828554e-01,  1.26523957e-01, 7.48526454e-02, 6.06480427e-02,-7.16083543e-03,  1.54227018e-01,-1.95076223e-02, 1.52277485e-01, 2.56087065e-01, -7.40527585e-02,-7.27226436e-02,-1.28338218e-01,-1.28174841e-01, -1.95719764e-01, 7.35422373e-02, 2.19070122e-01,-2.80971974e-02, -1.46282777e-01, 4.64201868e-02,-1.81090653e-01,-1.22302599e-01, -3.77401412e-02, 2.37309113e-01, 1.66577101e-01,-7.20954835e-02,  2.29301751e-01, 1.30261788e-02,-1.18526928e-01,-4.44172435e-02,  1.17357098e-01, 9.74963754e-02,-2.75928259e-01, 1.84489250e-01,  1.19693086e-01, 9.82701927e-02,-1.35033101e-01, 2.06356660e-01,  1.08661670e-02,-4.86312918e-02,-1.68973893e-01, 3.09521761e-02, -8.52853507e-02,-1.49754494e-01,-3.06258649e-01,-2.45680645e-01,  5.10463826e-02, 1.23139076e-01, 1.47485644e-01,-4.61130179e-02, -5.12085743e-02, 1.25731960e-01, 5.63836610e-03, 8.26914385e-02,  1.15832321e-01,-1.59117967e-01,-5.98782264e-02,-8.45995843e-02, -5.34478156e-03,-1.21440493e-01, 3.15927267e-01, 1.14370331e-01, -2.28864089e-01,-1.15922116e-01, 1.07985571e-01, 1.96253642e-01, -1.72555335e-02,-2.16152906e-01,-9.49283689e-02, 9.54976957e-03, -5.94872124e-02, 5.44434898e-02, 8.37944299e-02,-2.11282641e-01, -3.18109663e-03, 1.76200166e-01,-1.27939597e-01, 2.58469343e-01,  6.70658797e-02, 1.40495956e-01,-3.77116650e-02, 5.17991446e-02, -1.09716721e-01, 9.28745978e-03, 9.46997106e-02,-1.56694688e-02,  1.20723732e-01, 9.37928483e-02,-1.81535333e-01,-1.51648605e-02,  1.55310621e-02, 1.49826333e-01,-1.15237206e-01,-1.05653018e-01,  1.35649458e-01, 1.33979306e-01, 1.16036892e-01,-1.45050231e-02,  8.44522342e-02, 8.82878974e-02, 1.66061744e-01,-1.48120686e-01, -2.04828486e-01,-1.13869481e-01,-4.95135710e-02,-1.51372433e-01, -1.97924450e-01, 1.08634368e-01,-7.80174360e-02,-8.89065489e-02, -8.39593336e-02,-1.36480048e-01,-1.32443503e-01,-1.19537935e-01,  1.20400479e-02, 4.20930497e-02,-2.10988760e-01, 1.11120649e-01,  9.10520777e-02,-1.04963826e-02,-3.99777107e-02,-1.89349398e-01, -1.41835630e-01, 1.00306638e-01, 1.21105507e-01,-3.85511890e-02, -7.45471865e-02, 1.38916939e-01, 2.09754966e-02,-1.22736506e-01, -1.49759333e-04, 3.89926173e-02, 4.59742956e-02,-9.71387513e-03,  1.60520732e-01,-2.70121515e-01, 3.59617174e-02, 5.64413778e-02, -3.28817554e-02, 3.57782133e-02,-1.70439616e-01, 7.27475854e-03, -8.77359211e-02, 1.68032199e-01, 1.30810738e-01, 5.19067310e-02,  8.46203268e-02, 1.07551135e-01, 2.34905303e-01, 6.28013397e-03,  4.30698842e-02,-6.64487779e-02,-8.30452442e-02, 3.17185037e-02,  9.22195427e-03,-1.03854045e-01, 2.42880300e-01, 6.54678345e-02, -1.31386086e-01,-3.17158759e-01, 1.63282633e-01, 2.12667421e-01, -6.12284429e-02,-2.89909691e-01,-1.37035802e-01, 1.82332620e-01, -8.72329175e-02,-1.17734805e-01,-7.85414651e-02, 1.74497500e-01,  9.51666012e-03,-9.64880660e-02, 2.34649405e-02, 8.26877654e-02,  3.42937522e-02, 5.85606247e-02,-1.30788565e-01,-2.35423639e-01, -1.40914127e-01, 5.95715493e-02,-9.81926546e-02,-1.23718046e-02, -1.12150855e-01, 6.21669851e-02,-1.70609549e-01, 7.18365461e-02, -1.50762513e-01, 8.79618302e-02, 1.28316551e-01, 1.84912793e-02,  3.94932292e-02, 1.64128080e-01, 1.93475351e-01, 1.10441916e-01,  1.95278242e-01,-1.88823164e-01, 4.37808689e-03, 9.49564353e-02, -8.73715207e-02, 2.23453611e-01, 3.25843040e-03, 9.47327241e-02, -2.93569732e-02,-1.08985700e-01,-8.35377432e-04,-7.36968033e-03,  5.61922044e-02, 1.73378646e-01, 2.08678082e-01,-1.60105273e-01, -1.56317800e-01,-2.21995190e-01,-7.37177134e-02,-6.00371435e-02, -1.74029067e-01,-5.20869419e-02,-1.93692118e-01,-2.24844709e-01,  1.58466488e-01, 1.41933307e-01,-8.98537934e-02,-1.30748525e-01, -1.99181348e-01, 1.02177270e-01, 1.08731911e-02, 2.20308825e-02,  1.86545998e-01, 1.53793888e-02,-8.66749957e-02, 3.02413926e-02,  7.58006275e-02, 1.63624883e-02,-8.98344889e-02, 2.21842960e-01,  1.09533727e-01, 5.04794978e-02, 6.54647574e-02,-1.58685446e-02, -1.07392438e-01, 2.03048512e-01, 1.36463448e-01, 1.83585405e-01,  4.14257869e-02, 6.75516669e-03,-4.89897840e-03,-1.48917511e-01,  1.66930422e-01, 1.20910808e-01,-1.17669880e-01,-4.17373478e-02,  1.55598179e-01, 1.15371831e-01,-2.14935362e-01, 8.03201646e-02,  9.58823785e-02,-4.17634696e-02,-2.58548915e-01, 1.80512309e-01, -2.87028644e-02, 1.96924016e-01,-7.16333538e-02, 6.49492070e-02, -2.35615373e-01, 2.56569862e-01,-3.26479785e-03, 2.38206536e-01, -2.42173254e-01,-7.33394641e-03, 1.72011957e-01,-1.16801128e-01, -2.00400323e-01, 2.52980739e-01, 1.81537688e-01,-4.67644958e-03, -1.46776468e-01, 1.16164558e-01,-8.71880502e-02,-6.33351458e-03,  1.83169335e-01, 2.13517174e-01, 2.41802722e-01,-1.27134323e-01, -9.62639228e-02,-8.05940256e-02,-3.98751572e-02, 1.73171759e-02,  1.90777898e-01, 2.38430187e-01,-6.83174059e-02,-9.52868606e-04,  1.50617793e-01,-6.76634312e-02,-2.45090872e-01, 6.80347234e-02, -2.93112658e-02,-9.73572284e-02,-1.17687821e-01,-2.67350703e-01, -1.93572775e-01, 1.29037917e-01, 9.96237993e-02,-8.13587196e-03,  3.65866981e-02,-2.85975367e-01,-1.77796915e-01,-1.70498848e-01,  1.54285744e-01,-5.80702089e-02,-1.56609043e-01, 5.39918393e-02, -1.93764523e-01,-2.83342898e-01,-5.27829211e-03, 1.11458078e-01,  7.60971606e-02,-7.62203634e-02, 4.96044718e-02,-1.94017023e-01,  4.36879834e-03,-1.34448096e-01, 3.15823883e-01,-1.69605777e-01,  4.56613749e-02, 1.93098504e-02, 3.22814733e-02,-1.60548374e-01, -1.87408701e-01,-1.82226196e-01, 1.03706464e-01, 9.74642187e-02, -2.86980830e-02, 6.11414015e-02, 5.49799949e-02,-3.62332202e-02, -5.00780828e-02, 1.94150787e-02,-9.61514562e-02, 1.16336659e-01,  9.41707417e-02, 4.30952720e-02,-1.74492911e-01, 8.30044970e-02, -1.06520019e-01,-1.68116644e-01, 1.46138206e-01,-2.55070645e-02, -2.56918728e-01, 1.73117295e-01, 1.68867514e-01,-1.00896411e-01, -1.21668622e-01, 2.03052629e-02,-1.06397234e-01, 1.06236413e-02,  7.22590685e-02, 8.98315012e-02, 1.00235671e-01,-1.18070863e-01,  1.98266760e-01,-7.06517473e-02,-1.66498765e-01, 7.72583783e-02, -6.68874606e-02, 1.40985310e-01,-2.83729911e-01, 2.33887792e-01, -1.66316763e-01, 4.52032965e-03,-2.98639331e-02, 1.24435127e-02, -9.18076560e-02, 1.29242212e-01, 4.63932991e-01, 1.95202172e-01, -7.73159862e-02, 6.80680424e-02,-7.68609121e-02,-1.39963239e-01, -1.53746873e-01,-1.26861408e-01, 1.72812194e-01,-1.88056797e-01,  1.47388443e-01,-2.54597198e-02,-9.89264399e-02, 3.39008182e-01,  1.47456422e-01,-3.89532931e-02,-7.04146326e-02, 6.66380078e-02, -1.15239307e-01, 1.30981743e-01, 2.37874687e-01,-1.09618686e-01, -1.01176962e-01,-8.57942253e-02,-8.90164748e-02, 1.32059723e-01, -1.14073358e-01, 1.18952960e-01, 3.72637133e-03, 1.28984094e-01,  7.94045031e-02, 2.54558355e-01, 1.72659248e-01,-5.63019663e-02,  9.60277244e-02, 4.51875106e-02, 2.24725455e-02,-8.22208226e-02, -2.19831511e-01,-5.50264902e-02,-1.22685902e-01,-2.40662247e-01,  3.48951593e-02,-1.03348196e-01,-5.53293936e-02,-2.58454625e-02, -1.11151136e-01, 1.39568523e-01,-3.79804769e-05,-1.28959298e-01, -2.76994072e-02,-9.71688479e-02, 2.12343872e-01, 3.69032770e-02, -6.88661113e-02,-1.52797267e-01, 1.75138235e-01,-7.10998699e-02, -1.44481743e-02, 4.73635606e-02, 1.34461429e-02,-9.79231074e-02, -5.79757914e-02,-4.00188081e-02,-2.67362203e-02,-3.85266729e-02,  1.36510938e-01, 1.85844079e-01, 3.82698998e-02, 1.22227699e-01, -1.71556156e-02,-8.04108456e-02, 3.61312404e-02, 1.28605798e-01, -2.74811722e-02, 2.26332843e-01,-7.34273642e-02,-5.44576757e-02,  1.65811449e-01, 3.36297750e-02, 1.12212151e-01,-1.17352262e-01,  2.02467502e-03, 9.32784528e-02, 6.88280761e-02, 1.70211405e-01,  3.83841880e-02,-5.10532483e-02,-2.19744593e-01, 8.17642063e-02,  9.39231962e-02, 8.43439549e-02, 1.67611510e-01,-1.63495824e-01, -2.19707489e-01, 9.53355953e-02,-9.21945497e-02,-2.62833722e-02, -6.99002445e-02,-4.19997349e-02,-1.19201869e-01,-5.24335913e-02,  6.90204278e-02, 1.23158231e-01, 1.09473668e-01,-4.38756309e-02,  5.94517216e-02, 9.42994058e-02,-3.15161459e-02, 2.12600455e-02,  1.52089968e-01, 3.00988946e-02,-2.35929653e-01, 1.79340273e-01, -1.93803683e-01,-3.16189468e-01, 2.35833079e-01,-1.58488512e-01,  6.53796494e-02,-2.56923020e-01, 8.01876709e-02, 2.18894687e-02, -2.75358230e-01,-1.96982235e-01, 1.94875926e-01,-1.90556481e-01, -4.83368174e-04, 2.21717745e-01,-7.54016191e-02, 1.41927775e-03,  5.33901155e-02, 8.30045566e-02, 1.75433889e-01, 1.61460102e-01, -2.43710130e-01, 2.94561058e-01, 2.17127666e-01, 6.10218048e-02,  2.36708239e-01,-1.07068740e-01,-2.96590477e-02, 1.55571535e-01,  3.39776248e-01,-5.93818873e-02, 4.30968776e-02, 1.56787694e-01, -5.00007998e-03,-1.21370926e-01, 1.30761350e-02,-8.20366219e-02, -7.12255612e-02, 8.17267448e-02,-4.11301330e-02, 4.59892713e-02,  6.59445673e-02,-1.88181728e-01, 9.88612324e-02, 1.35699138e-01,  1.78485364e-01,-7.61432573e-02, 1.37511671e-01, 1.01922072e-01,  1.70411542e-01,-1.76010773e-01, 1.69756189e-01,-7.33091310e-02, -8.13645869e-02, 9.90231857e-02, 5.53935207e-02,-2.42171898e-01, -6.51844740e-02,-4.61462885e-02, 5.55609167e-02, 3.34111862e-02, -1.24895737e-01,-6.65514469e-02, 1.35000587e-01, 1.44221067e-01,  1.31835341e-01, 2.12192506e-01, 2.51501258e-02, 1.46673635e-01,  3.21476646e-02, 1.48041740e-01,-2.22001612e-01,-1.67264566e-02, -1.46068996e-02, 9.23987180e-02, 4.32680771e-02, 2.16651894e-02, -1.92733184e-01,-3.04598480e-01, 1.05107464e-01,-1.01998821e-01,  1.55799389e-02, 1.21515356e-01, 6.98522404e-02,-1.47204161e-01,  1.07739471e-01, 3.37810181e-02,-1.74500465e-01,-6.90415129e-02, -1.67198420e-01,-6.17123768e-02, 7.39574283e-02, 5.14658913e-02, -1.45740375e-01,-1.21472329e-01,-1.94697931e-01,-1.28408581e-01, -4.14039977e-02, 1.35861516e-01,-1.43964356e-02,-9.85761434e-02,  2.12303083e-02, 6.33097021e-03, 5.40159009e-02,-1.34307757e-01, -1.31897837e-01,-2.03591138e-01,-1.47499844e-01, 1.11015648e-01,  1.29032359e-01,-8.60195309e-02, 7.11415615e-03,-8.58967453e-02, -2.12967992e-02, 6.38747960e-02, 1.17370926e-01, 2.38061115e-01,  1.56662643e-01,-1.38147384e-01,-1.42384589e-01,-8.65141079e-02,  1.61209125e-02, 6.71765208e-02,-2.31028832e-02,-1.22994602e-01,  1.68331161e-01,-9.47955251e-03, 6.48602843e-02,-2.58773249e-02,  4.91197407e-02,-1.31250709e-01, 1.33148968e-01,-5.76223023e-02,  2.60259300e-01,-2.22896546e-01,-4.36572321e-02, 1.83233157e-01,  5.58242959e-04, 1.43249243e-01,-1.17512099e-01, 2.95439571e-01,  7.85893947e-02, 2.74493843e-01, 1.19164977e-02,-1.24765977e-01,  1.83687061e-01, 7.16413185e-02, 1.00293472e-01,-1.03779629e-01, -1.03352644e-01,-3.96607816e-02, 1.73910007e-01, 1.62523925e-01, -7.71570113e-03,-9.13264528e-02,-2.49804601e-01,-1.15179896e-01, -3.29097733e-02,-2.41541430e-01,-1.90093666e-01,-9.43140760e-02,  2.91154832e-02,-1.10225203e-02,-5.00160716e-02, 5.58279008e-02,  1.00091949e-01,-5.35079613e-02,-3.06565523e-01,-2.50252903e-01, -5.86756319e-02,-1.68344051e-01,-6.25482574e-02, 4.57668230e-02,  8.64096731e-02, 1.59972254e-02,-1.56909883e-01,-2.37623274e-01, -1.22191578e-01,-2.21786708e-01, 2.63857961e-01,-1.01711206e-01, -5.65401241e-02, 9.90848094e-02, 9.10051167e-02,-1.28128290e-01, -1.28131926e-01,-1.74360409e-01,-1.38510630e-01, 1.21886589e-01, -1.90900698e-01,-3.28182787e-01,-7.62429908e-02, 1.10312249e-03,  4.06150036e-02, 2.15132728e-01, 1.64775196e-02,-5.62961921e-02, -1.07734375e-01, 1.10235229e-01,-1.29740592e-03, 6.62140921e-02, -1.15267359e-01,-1.92933381e-01,-9.99390930e-02,-1.65086046e-01,  1.35630667e-01,-6.28984645e-02, 1.67018086e-01, 5.13654351e-02, -1.50869787e-01, 8.39329585e-02,-1.72543265e-02, 5.73676899e-02, -5.72501719e-02, 6.69174343e-02, 1.03592575e-02, 8.48811939e-02,  1.00411721e-01, 1.73741013e-01,-9.71954167e-02,-3.92015204e-02, -1.53827816e-01, 1.61429375e-01, 1.38765536e-02, 5.62718138e-02, -6.00520112e-02, 2.32008249e-01,-1.54140234e-01, 7.92243555e-02, -9.32075828e-02, 4.31360193e-02, 6.33755932e-03, 2.25238234e-01, -7.92093426e-02, 1.24655269e-01,-6.51906282e-02,-7.46173859e-02,  8.36516395e-02,-3.82230021e-02,-7.53584579e-02, 2.12631956e-01,  9.21583623e-02, 1.84456110e-01, 5.75368591e-02, 4.82000150e-02,  1.31328270e-01, 1.88326761e-01, 7.28263780e-02,-3.83586958e-02, -4.23558764e-02, 2.05276683e-01, 6.79247379e-02,-1.38713717e-01, -8.31776783e-02, 2.28413001e-01, 9.33253989e-02, 1.71567544e-01,  7.58589059e-02, 8.10908750e-02, 8.52911994e-02, 2.20278986e-02, -1.88324347e-01, 9.39750001e-02,-5.50115779e-02,-3.62674296e-02,  1.32718429e-01,-7.77601674e-02,-8.92983750e-02, 1.16757385e-01,  2.09960595e-01,-2.46417802e-02, 1.77027747e-01, 4.37442362e-01, -9.58765149e-02,-5.65256476e-02,-1.62558973e-01,-4.60314341e-02, -6.13475479e-02, 1.23391122e-01,-2.85199821e-01,-2.40377426e-01,  1.24525160e-01, 2.34903283e-02, 9.76781696e-02,-3.13595802e-01,  9.17635579e-03, 2.47492358e-01, 1.55953795e-01,-2.03304306e-01,  2.43954316e-01,-1.30270079e-01,-1.30230412e-01,-4.69592446e-03,  1.28866034e-02, 4.43910621e-02,-2.07636669e-01,-1.19746268e-01, -7.47649297e-02, 5.90395331e-02, 3.45281735e-02,-7.45978355e-02,  2.45003641e-01,-1.49356365e-01, 1.68374717e-01,-6.09091111e-02,  1.55177519e-01, 1.32553607e-01,-6.44042939e-02,-9.54531804e-02,  1.46797094e-02, 6.59079999e-02, 1.30249739e-01,-6.05818629e-02, -1.31579280e-01,-1.11742228e-01, 2.23489832e-02,-2.62753814e-01, -5.76458089e-02, 4.56267074e-02,-5.00294194e-02, 7.82765746e-02, -1.07253157e-01,-9.10100043e-02, 1.05057342e-03,-1.23533083e-03,  3.52029428e-02,-9.12562236e-02, 1.24353051e-01, 2.00200990e-01,  3.37967098e-01,-2.45383362e-05,-5.69620505e-02, 4.88137491e-02,  4.80221026e-02, 4.54286225e-02,-1.90747008e-01,-1.18834063e-01,  6.21416830e-02,-1.12323001e-01, 1.42023638e-01,-1.50100082e-01, -2.39488289e-01, 1.47786215e-01, 5.09966984e-02, 2.95383893e-02,  3.41825895e-02, 1.22517683e-01,-8.81551206e-02,-2.38616973e-01, -1.80877730e-01, 8.21313411e-02,-1.17784046e-01, 1.38307735e-01, -1.52335048e-01,-5.63640613e-03, 1.20112896e-01,-4.45604557e-03, -3.42355333e-02, 3.61379795e-02, 2.66963929e-01,-5.53593673e-02, -2.09671840e-01,-1.95411831e-01,-1.61818296e-01, 2.03461852e-02, -1.49687016e-02,-7.38927349e-02, 6.87267035e-02, 1.01230145e-01, -4.33475478e-03, 1.69586867e-01,-1.91397056e-01, 2.29061648e-01, -3.53564438e-03,-2.52459031e-02,-2.29688346e-01,-1.27888592e-02,  1.37551993e-01, 2.07532108e-01, 5.59841432e-02,-4.89936098e-02, -9.01985019e-02,-2.78716609e-02,-6.97046146e-02, 4.02608365e-02,  3.92096974e-02, 8.42280686e-02, 2.25861445e-02,-2.82701224e-01, -7.57562667e-02,-6.30012453e-02, 7.65972137e-02,-3.42994146e-02,  6.77932799e-02,-1.65403947e-01,-2.19220057e-01,-1.45591244e-01,  1.91637605e-01, 5.39558753e-02,-4.07130718e-02, 1.10954963e-01,  1.67677028e-03,-1.69450752e-02,-1.43485859e-01, 2.24940609e-02, -4.98451479e-02, 1.02565408e-01, 7.73629546e-02,-2.41828248e-01, -2.82010008e-02,-1.58555344e-01, 1.14990890e-01, 1.68890250e-03,  1.33603483e-01,-1.36383548e-01, 1.13152429e-01,-9.56576243e-02,  1.23554338e-02,-5.92271052e-03, 3.44035514e-02, 6.53678030e-02,  6.74931556e-02,-2.57224087e-02,-3.57670821e-02,-2.00041663e-02, -1.48311779e-01, 3.25209610e-02,-5.23593053e-02, 3.18329521e-02, -9.02933925e-02,-2.20813856e-01, 5.73658273e-02,-1.73335046e-01,  1.50458604e-01, 4.27505188e-02, 1.12225085e-01,-4.65777367e-02,  7.57642984e-02,-1.29621997e-01,-4.96900752e-02,-3.35656330e-02, -3.64450030e-02, 1.70464665e-01,-1.13211498e-01,-3.00159547e-02,  1.50665063e-02, 1.15016438e-01,-2.49820855e-02, 1.89754352e-01;

		l0.bih <<  0.22794992, 0.09565689,-0.15423054, 0.14950842, 0.13145874, 0.12743543, -0.0838898 ,-0.03108623, 0.02342252,-0.12728988, 0.00864353, 0.04473162, -0.1112628 , 0.09193689,-0.01640009, 0.11361372,-0.14199539,-0.02879887, -0.175296  , 0.17200805, 0.10565007,-0.1140077 ,-0.12402871,-0.098648  , -0.08790199,-0.16325659,-0.00761353,-0.08403907, 0.0352656 ,-0.11701158, -0.05317138,-0.16346166;

		l0.bhh << -0.05548013,-0.11075451, 0.07054171,-0.1241101 ,-0.06133113, 0.11182656,  0.1749236 ,-0.00318018, 0.2202231 , 0.07407402, 0.05221352,-0.13170944,  0.06173616,-0.04848735,-0.01557442, 0.07281531, 0.05910351, 0.08025423, -0.0083669 ,-0.10952844, 0.00776882,-0.11815834, 0.06403846, 0.04133157, -0.15328902, 0.00487714, 0.15346657,-0.15860912, 0.06454602,-0.03755564,  0.20204784,-0.03037213;

		l0.htn1 << 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0., 0.,0.,0.,0.,0.,0.,0.,0.;

		f.A << -0.22343874, 0.06109928,-0.13466343, 0.11124154, 0.09591775, 0.02231173,  0.15428661,-0.219393  ,-0.03868556,-0.09976447,-0.04780813,-0.19180198, -0.12214789,-0.01294353, 0.10079981,-0.02131165,-0.151912  , 0.07268529,  0.16287376, 0.06311273, 0.07539242,-0.1200185 ,-0.00250079, 0.13828616, -0.00817935, 0.00628205, 0.12688619,-0.06994888,-0.06166757,-0.07268574,  0.24395408,-0.01937487;
		f.b << -0.11873924;
	}

	void apply_model(T* x, T* y) {
		l0.apply_layer(*x);
		*y=f.apply_layer(l0.ht);
	}
};