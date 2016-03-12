/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		CC BY-NC-SA 3.0                                                **
************************************************************************************/

#ifndef __IIR_ANTIALIAS
#define __IIR_ANTIALIAS
//
// IIR filter
// lattice ARMA coefficients designed with MATLAb fdatools
// DD4WH 2016-03-05
// inspired by Clint KA7OEI
//
// LPF 5k elliptic, 60dB stopband, 48ksps

//#define NCoef 6
const uint16_t IIR_aa_5k_numStages = 6;
const float IIR_aa_5k_pkCoeffs[] =
{
		0.547564303565301,
		-0.874437851307620,
		0.929381964274064,
		-0.931756218288255,
		0.967791921156360,
		-0.855303237881406
};

const float IIR_aa_5k_pvCoeffs[] =
{
		0.00321398613474079,
		0.0103775071609725,
		0.0204793631675465,
		0.0207411754628459,
		0.0142582715360116,
		0.00416771325172439,
		0.000586794199906653
};

// IIR elliptic 48ksps, 6th order, FStop = 10000Hz
// -60dB stopband att, ARMA structure, coefficients in reversed order

const uint16_t IIR_aa_10k_numStages = 6;
const float IIR_aa_10k_pkCoeffs[] =
{
		0.301098203357079,
		-0.579105658407328,
		0.734150184329856,
		-0.671115797851337,
		0.939860662239371,
		-0.361103585037447
};

const float IIR_aa_10k_pvCoeffs[] =
{
		0.0174468544108513,
		0.0830073641688922,
		0.190703913563757,
		0.218380125399821,
		0.102432703504841,
		-0.00776347779147436,
		-0.0322591772433757
};

// IIR elliptic 48ksps, 6th order, FStop = 8000Hz
// -60dB stopband att, ARMA structure, coefficients in reversed order

const uint16_t IIR_aa_8k_numStages = 6;
const float IIR_aa_8k_pkCoeffs[] =
{
		0.382097471026454,
		-0.707860806497603,
		0.822488299956015,
		-0.809655940560093,
		0.943091324035883,
		-0.602154271982275
};

const float IIR_aa_8k_pvCoeffs[] =
{
		0.00902518911329759,
		0.0401957378835905,
		0.0934435150148285,
		0.114552126526293,
		0.0734506802740618,
		0.0130302613689033,
		-0.0115031852097110
};

// IIR elliptic 48ksps, 6th order, FStop = 8500Hz
// -60dB stopband att, ARMA structure, coefficients in reversed order

const uint16_t IIR_aa_8k5_numStages = 6;
const float IIR_aa_8k5_pkCoeffs[] =
{
		0.359939618704540,
		-0.676489478729843,
		0.801069829925990,
		-0.780419188957268,
		0.941052598112166,
		-0.546710306936035
};

const float IIR_aa_8k5_pvCoeffs[] =
{
		0.0106702880998750,
		0.0487135595564791,
		0.113867385924671,
		0.139020661730700,
		0.0847861503854092,
		0.0109690817210141,
		-0.0167288132890575
};

// IIR elliptic 48ksps, 6th order, FStop = 9500Hz
// -60dB stopband att, ARMA structure, coefficients in reversed order

const uint16_t IIR_aa_9k5_numStages = 6;
const float IIR_aa_9k5_pkCoeffs[] =
{
		0.319509178478567,
		-0.611998056066153,
		0.756628846034883,
		-0.711556259037217,
		0.939435113760607,
		-0.425861390235328
};

const float IIR_aa_9k5_pvCoeffs[] =
{
		0.0148361127984778,
		0.0699763422680422,
		0.162584450093266,
		0.191872694251187,
		0.100583774752231,
		0.000539571340153120,
		-0.0278287915752199
};

#endif