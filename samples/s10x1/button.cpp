#include "button.h"

#include <Common.h>
#include <Timer.h>

bool buttonPresed = false;
bool lastState = false;
Timer buttonReadTimer(100);

void buttonLoop() {
    if (buttonReadTimer.elapsed()) {
        bool btn = digitalRead(BTN);

        // ... ošetření zákmitů
        
        lastState = btn;
    }
}
