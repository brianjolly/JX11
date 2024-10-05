/*
  ==============================================================================

    Voice.h
    Created: 1 Oct 2024 2:48:22pm
    Author:  bjolly

  ==============================================================================
*/

#pragma once
#include "Oscillator.h"

struct Voice
{
    int note;
    Oscilator  osc;
    float saw;

    void reset()
    {
        note = 0;
        osc.reset();
        saw = 0.0f;
    }

    float render()
    {
        float sample = osc.nextSample();
        saw = saw * 0.997f + sample;
        return saw;
    }
};
