#include <Common.h>
#include <Scheduler.h>

/*
    Vraťme se k původnímu kódu ze s02, už se umíme obejít bez delay, ale...
*/

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void ledOn();
void ledOff();

Scheduler leds(ledOn, 1000);

void ledOn() {
    digitalWrite(LED1, HIGH);
    leds.next(ledOff);
}

void ledOff() {
    digitalWrite(LED1, LOW);
    leds.next(ledOn);
}

void loop () {
    leds.loop();
}