#include <Common.h>

/*
    #Stejný příklad jako s02, jen si trochu zjednodušíme kód
*/

void setup() {
    setupPins();
}

void loop() {
    delay(1000);
    toggle(LED1); // = digitalWrite(LED1, !digitalRead(LED1)); // * Přehoď stav LED
}