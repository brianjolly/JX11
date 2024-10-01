/*
  ==============================================================================

    Utils.h
    Created: 1 Oct 2024 4:43:42pm
    Author:  bjolly

  ==============================================================================
*/

#pragma once

inline void protectYourEars(floaat* buffer, int sampleCount)
{
    if (buffer == nullptr) { return; }

    bool firstWarning = true;

    for (int i = 0; i < sampleCount; ++i) {
        float x = buffer[i];
        bool silence = false;
        if (std::isnan(x)) {
            DBG("!!! WARNING: nan detected in audio buffer, silencing !!!");
        } else if (std::isinf(x)) {
            DBG("!!! WARNING: inf detected in audio buffer, silencing !!!");
        } else if (x < -2.0f || x > 2.0f) { // screaming feedback
            DBG("!!! WARNING: sample out of range, silencing !!!");
        } else if (x < -1.0f) {
            if (firstWarning) {
                DBG("!!! WARNING: sample out of range, claamping !!!");
                firstWarning = false;
            }
            buffer[i] = -1.0f;
        } else if (x > 1.0f) {
            if (firstWarning) {
                DBG("!!! WARNING: sample out of range, claamping !!!");
                firstWarning = false;
            }
            buffer[i] = 1.0f;
        }

        if (silence) {
            memset(buffer, 0, sampleCount * sizeof(float));
        }
    }
}


