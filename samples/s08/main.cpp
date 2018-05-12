#include <Common.h>

/*
    # Co třeba semafor
*/

void setup() {
    setupPins();
}

byte state = 1;

void loop () {
    switch(state) {
        case 1:
            semafor(1, 0, 0); // červená (1)
            delay(5000);
            state = 1;
            break;
    
        case 2:
            semafor(1, 1, 0); // červená + oranžová (2)
            delay(1000);
            state = 3;
            break;

        case 3:
            semafor(0, 0, 1); // zelená (3)
            delay(5000);
            state = 4;
            break;

        case 4:
            semafor(0, 1, 0); // oranžová (4)
            delay(1000);
            state = 1;
            break;
    }            
}