/*
  ==============================================================================

    Voice.h
    Created: 1 Oct 2024 2:48:22pm
    Author:  bjolly

  ==============================================================================
*/

#pragma once

struct Voice
{
    int note;
    int velocity;

    void reset()
    {
        note = 0;
        velocity = 0;
    }
};
