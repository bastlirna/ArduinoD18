#include <Common.h>

#include "semaphore.h"
#include "button.h"

/*
    # Co třeba semafor s tlačítkem
*/

void setup() {
    setupPins();
}

void loop () {
    semaphoreLoop();
    buttonLoop();
}