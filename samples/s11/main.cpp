#include <Common.h>

/*
    # Přerušení
*/

void flashLed() {
    digitalWrite(LED1, HIGH);
    delay(1000);
    digitalWrite(LED1, LOW);
}

void setup() {
    setupPins();
    attachInterrupt(digitalPinToInterrupt(BTN), flashLed, RISING);
}

void loop () {
}