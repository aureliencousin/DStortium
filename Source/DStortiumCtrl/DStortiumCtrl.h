/*
  ==============================================================================

    DStortiumCtrl.h
    Created: 27 Jul 2015 10:21:48pm
    Author:  Acacia

  ==============================================================================
*/

#ifndef DSTORTIUMCTRL_H_INCLUDED
#define DSTORTIUMCTRL_H_INCLUDED

class DStortiumCtrl
{
public:
DStortiumCtrl();
~DStortiumCtrl();

//Parameters
void setHPF(float hpf){_hpf = hpf;};
float getHPF(void){return _hpf;};

void setDrive(float drive){_drive = drive;};
float getDrive(void){return _drive;};

void setSymmetry(float symmetry){_symmetry = symmetry;};
float getSymmetry(void){return _symmetry;};

void setMix(float mix){_mix = mix;};
float getMix(void){return _mix;};

void setGain(float gain){_gain = gain;};
float getGain(void){return _gain;};

//Use
void clockProcessDrive(float* leftSample, float* rightSample); 
void clockProcessGain(float* leftSample, float* rightSample); 

private:
    float _hpf, _drive, _symmetry, _mix, _gain;
};



#endif  // DSTORTIUMCTRL_H_INCLUDED
