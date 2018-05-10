#include <Common.h>
#include <Timer.h>

/*
    To samé jako s04, ale trochu si zjednodšíme práci pomocí časovače <Timer.h>
*/

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

bool led1_state, led2_state;
Timer led1t(500), led2t(250);

void loop1() {
    if (!led1t.elapsed()) return;
    digitalWrite(LED1, led1_state = ! led1_state);
} 

void loop2() {
    if (!led2t.elapsed()) return;
    digitalWrite(LED2, led2_state = ! led2_state);
}

void loop () {
    loop1();
    loop2();
}