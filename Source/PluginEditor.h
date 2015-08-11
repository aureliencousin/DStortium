/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_E2F2C81EF21FB1FA__
#define __JUCE_HEADER_E2F2C81EF21FB1FA__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DStortiumAudioProcessorEditor  : public AudioProcessorEditor,
                                       public Timer,
                                       public SliderListener
{
public:
    //==============================================================================
    DStortiumAudioProcessorEditor (DStortiumAudioProcessor& ownerFilter);
    ~DStortiumAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void timerCallback();
	DStortiumAudioProcessor* getProcessor() const
     {return static_cast <DStortiumAudioProcessor*>(getAudioProcessor());}
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);

    // Binary resources:
    static const char* dstortium_png;
    static const int dstortium_pngSize;
    static const char* dstortiumbg_png;
    static const int dstortiumbg_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> gainSlider;
    ScopedPointer<Label> gainLabel;
    ScopedPointer<Slider> symmetrySlider;
    ScopedPointer<Label> symmetryLabel;
    ScopedPointer<Slider> driveSlider;
    ScopedPointer<Label> driveLabel;
    ScopedPointer<Slider> hpfSlider;
    ScopedPointer<Label> hpfLabel;
    ScopedPointer<Label> mixLabel;
    ScopedPointer<Slider> mixSlider;
    ScopedPointer<Slider> lowPassSlider;
    ScopedPointer<Label> lowpassLabel;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label7;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DStortiumAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_E2F2C81EF21FB1FA__
