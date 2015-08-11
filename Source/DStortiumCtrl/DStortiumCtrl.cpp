/*
  ==============================================================================

    DStortiumCtrl.cpp
    Created: 27 Jul 2015 10:21:31pm
    Author:  Acacia

  ==============================================================================
*/

#include <math.h>
#include "DStortiumCtrl.h"
#include "Appconfig.h"
#include "juce_audio_basics/juce_audio_basics.h"


DStortiumCtrl::DStortiumCtrl(){
    setGain(0.0f);
    setMix(100.0f);
    setDrive(0.0f);
    setHPF(20.0f);
    setSymmetry(0.0f);
}

DStortiumCtrl::~DStortiumCtrl(){}

void DStortiumCtrl::clockProcessDrive(float* LeftSample, float* RightSample)
{
	float linDrive = pow(10,_drive/10); //db to linear drive value

	//Applying Input gain
	*LeftSample=*LeftSample * linDrive;
    *RightSample=*RightSample * linDrive;
}

void DStortiumCtrl::clockProcessGain(float* LeftSample, float* RightSample)
{
	float linGain = pow(10,_gain/10); //db to linear gain conversion
	//Applying Output gain
    *LeftSample=*LeftSample * linGain;
    *RightSample=*RightSample * linGain;
}