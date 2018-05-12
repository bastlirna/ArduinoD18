#include <Common.h>

/*
    # Neblokující kód
*/

void setup() {
    setupPins();
}

unsigned long led1_time, led2_time;

void loop1() {
    if (millis() - led1_time < 1000) return;
    led1_time = millis();

    toggle(LED1);
}

void loop2() {
    if (millis() - led2_time < 1000) return;
    led2_time = millis();

    toggle(LED2);
}

void loop () {
    loop1();
    loop2();
}