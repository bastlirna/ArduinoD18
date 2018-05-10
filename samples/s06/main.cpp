#include <Common.h>
#include <Timer.h>

/*
    Vraťme se k původnímu kódu ze s02, už se umíme obejít bez delay, ale...
*/

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

Timer led1t(1000);

void loop1() {
    // delay() jsem nahradili za 
    if (!led1t.elapsed()) return;

    digitalWrite(LED1, HIGH);
    
    // tak ho nahradíme i na druhém méstě, bude to fungovat?
    if (!led1t.elapsed()) return;

    digitalWrite(LED1, LOW);
}

void loop2() {
    // ...
}

void loop () {
    loop1();
    loop2();
}