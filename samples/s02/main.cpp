#include <Common.h>

/*
    # My ale cheme blika dvěmi LED
*/

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop1() {
    digitalWrite(LED1, HIGH);
    delay(1000);
    digitalWrite(LED1, LOW);
    delay(1000);
}

void loop2() {
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED2, LOW);
    delay(1000);
}

void loop () {
    RUN loop1();
    RUN loop2();
//! ^^^ tohle by bylo fajn, ale nic takového nefunguje :(
}