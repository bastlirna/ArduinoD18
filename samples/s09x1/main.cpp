#include <Common.h>

/*
    Úkrok stranou - ukazatel na funkce
*/

void setup() {
    pinMode(LED1, OUTPUT);
}


void ledOn() {
    digitalWrite(LED1, HIGH);
}

void ledOff() {
    digitalWrite(LED1, LOW);
}

void (*ledDo)(void) = ledOn;

void loop () {
    ledDo();

    ledDo = ledDo == ledOn ? ledOff : ledOn;

    delay(1000);
}