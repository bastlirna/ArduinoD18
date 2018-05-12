#include <Common.h>
#include <Timer.h>

/*
    # Co třeba semafor
*/

void setup() {
    setupPins();
}

void state1();
void state2();
void state3();
void state4();

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
    if (timer.elapsed()) currentState = state1;
}

void loop () {
    currentState(); 
}