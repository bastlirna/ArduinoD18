#include <Common.h>

/*
    # Co třeba semagor
*/

void setup() {
    setupPins();
}

void semafor(bool red, bool orange, bool green) {
    digitalWrite(LED1, red); 
    digitalWrite(LED2, orange); 
    digitalWrite(LED3, green);
}

/*
    /--> (1) --> (2) --> (3) --> (4) --\
    |                                  |
    \----------------------------------/
*/

void loop () {
    semafor(1, 0, 0); // červená (1)
    delay(5000);
    semafor(1, 1, 0); // červená + oranžová (2)
    delay(1000);
    semafor(0, 0, 1); // zelená (3)
    delay(5000);
    semafor(0, 1, 0); // oranžová (4)
    delay(1000);
}