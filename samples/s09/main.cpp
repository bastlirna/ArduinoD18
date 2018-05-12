#include <Common.h>
#include <Timer.h>

/*
    # Co třeba semafor
*/

void setup() {
    setupPins();
}

byte state = 1;
Timer timer(5000);

void loop () {
    switch(state) {
        case 1:
            semafor(1, 0, 0); // červená (1)
            if (timer.elapsed()) state = 2;
            break;
    
        case 2:
            semafor(1, 1, 0); // červená + oranžová (2)
            if (timer.elapsed()) state = 3;
            break;

        case 3:
            semafor(0, 0, 1); // zelená (3)
            if (timer.elapsed()) state = 4;
            break;

        case 4:
            semafor(0, 1, 0); // oranžová (4)
            if (timer.elapsed()) state = 1;
            break;
    }            
}