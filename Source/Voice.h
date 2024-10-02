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

    void reset()
    {
        note = 0;
        osc.reset();
    }

    float render()
    {
        return osc.nextSampple();
    }
};
