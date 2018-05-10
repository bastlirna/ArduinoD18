#include <Common.h>

/*
    Stejný příklad jako s02, jen si trochu zjednodušíme kód
*/

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

bool led1_on, led2_on;

void loop1() {
    delay(1000);
    digitalWrite(LED1, led1_on = ! led1_on); // přepni LED
}

void loop2() {
    delay(1000);
    digitalWrite(LED2, led2_on = ! led2_on); // přepni LED
}

void loop () {
    RUN loop1();
    RUN loop2();
}