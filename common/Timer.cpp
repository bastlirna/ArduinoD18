#include <Timer.h>
#include <Arduino.h>

Timer::Timer(unsigned long i) {
    interval = i;
}

bool Timer::elapsed() {
    if (millis() - last > interval) {
        last = millis();
        return true;
    }
    return false;
}

void Timer::reset() {
    last = millis();
}

void Timer::reset(unsigned long i) {
    interval = i;
    last = millis();
}