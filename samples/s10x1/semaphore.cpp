#include "semaphore.h"
#include "button.h"
#include <Common.h>
#include <Timer.h>

static void state1();
static void state2();
static void state3();
static void state4();

Timer timer(5000);

void (*currentState)(void) = state1; // * Tohle je ukazatel na fci.

void state1() {
    semafor(1, 0, 0); // červená (1)
    if (timer.elapsed()) currentState = state2;
}

void state2() {
    semafor(1, 1, 0); // červená + oranžová (2)
    if (timer.elapsed()) currentState = state3;
}

void state3() {
    semafor(0, 0, 1); // zelená (3)
    if (timer.elapsed()) currentState = state4;
}

void state4() {
    semafor(0, 1, 0); // oranžová (4)
    if (timer.elapsed()) {
        currentState = state1;
    }
    if (buttonPresed) {
        currentState = state5;
    }
}

void state5() {
    if (buttonPresed) {
        currentState = state1;
        buttonPresed = false;
    }
}

void semaphoreLoop() {
    currentState();
}
