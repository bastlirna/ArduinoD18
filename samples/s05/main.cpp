#include <Common.h>
#include <Timer.h>

/*
    # To samé jako s04, ale trochu si zjednodšíme práci pomocí časovače <Timer.h>
*/

void setup() {
    setupPins();
}

Timer led1t(500), led2t(250);

void loop1() {
    if (led1t.elapsed()) {
        toggle(LED1);
    }
} 

void loop2() {
    if (led2t.elapsed()) {
        toggle(LED2);
    }
}

void loop () {
    loop1();
    loop2();
}