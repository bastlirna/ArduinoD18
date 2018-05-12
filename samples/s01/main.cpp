#include <Common.h> // *1 Společná knihovna 

/*
    # Základní příklad na blikání JEDNOU (!) LED
*/

void setup() {
    setupPins(); // *2 Nastaví LED a BTN (viz Common.h)
}

void loop() {
    digitalWrite(LED1, HIGH);
    delay(1000);
    digitalWrite(LED1, LOW);
    delay(1000);
}
