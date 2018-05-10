#include <Common.h>
#include <Timer.h>

/*
    Co třeba semagor
*/

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}

void light(bool red, bool orange, bool green) {
    digitalWrite(LED1, red); 
    digitalWrite(LED1, orange); 
    digitalWrite(LED1, green);
}

void loop () {
    light(1, 0, 0); // červená
    delay(5000);
    light(1, 1, 0); // červená + oranžová
    delay(1000);
    light(0, 0, 1); // zelená
    delay(5000);
    light(0, 1, 0); // oranžová
    delay(1000);
}