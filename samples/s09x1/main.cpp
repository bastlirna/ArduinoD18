#include <Common.h>

/*
    # Úkrok stranou - ukazatel na funkce
*/

void setup() {
    setupPins();
}

void ledOn() {
    digitalWrite(LED1, HIGH);
}

void ledOff() {
    digitalWrite(LED1, LOW);
}

void (*ledDo)(void) = ledOn; // * Tohle je ukazatel na fci.

void loop () {

    ledDo(); // * Zavolat 

    if (ledDo == ledOn) {
        ledDo = ledOff;
    } else {
        ledDo = ledOn;
    }

    delay(1000);
}