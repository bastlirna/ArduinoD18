#include <Common.h>

/*
    Neblokující kód
*/

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

bool led1_state, led2_state;
unsigned long led1_time, led2_time;

void loop1() {
    if (millis() - led1_time < 1000) return;
    led1_time = millis();
    digitalWrite(LED1, led1_state = ! led1_state);
}

void loop2() {
    if (millis() - led2_time < 1000) return;
    led2_time = millis();
    digitalWrite(LED2, led2_state = ! led2_state);
}

void loop () {
    loop1();
    loop2();
}