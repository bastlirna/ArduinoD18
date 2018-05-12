#include <Common.h>

void setupPins() {
    // LEDs
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);

    // Talčítko
    pinMode(BTN, INPUT_PULLUP);
}

void toggle(uint8_t pin) {
    digitalWrite(pin, !digitalRead(pin)); // * Přehoď stav PINu
}

void semafor(bool red, bool orange, bool green) {
    digitalWrite(LED1, red); 
    digitalWrite(LED2, orange); 
    digitalWrite(LED3, green);
}