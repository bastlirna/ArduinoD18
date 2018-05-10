#include <Scheduler.h>

Scheduler::Scheduler(fn startFn, unsigned long minimalInterval = 0) {
    nextFn = startFn;
    interval = minimalInterval;
}

void Scheduler::loop() {
    if (nextFn != nullptr && timer.elapsed()) {
        nextFn();
    }
}

void Scheduler::next(fn newFn) {
    this->next(newFn, interval);
}

void Scheduler::next(fn newFn, unsigned long newInterval) {
    nextFn = newFn;
    timer.reset(newInterval);
}