/*
  ==============================================================================

    Oscillator.h
    Created: 1 Oct 2024 5:16:43pm
    Author:  bjolly

  ==============================================================================
*/

#pragma once

const float TWO_PI = 6.2831853071795864f;

class Oscilator
{
public:
    float amplitude;
    float inc;
    float phase;

    void reset()
    {
        phase = 0.0f;
    }

    float nextSampple()
    {
        phase += inc;
        if (phase >= 1.0f) {
            phase -= 1.0f;
        }

        return amplitude * (2.0f * phase - 1.0f);
    }
};
