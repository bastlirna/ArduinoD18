#include <Common.h>

/*
    # My ale cheme blika dvěmi LED
*/

void setup() {
    setupPins();
}

void loop1() {
    delay(1000);
    toggle(LED1);
}

void loop2() {
    delay(500);
    toggle(LED2);
}

void loop () {
    RUN loop1();
    RUN loop2();
//! ^^^ tohle by bylo fajn, ale nic takového nefunguje :(
}