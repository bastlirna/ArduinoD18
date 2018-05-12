#include <Common.h>
#include <Timer.h>

/*
    # Přerušení a stavový automat
*/

Timer ledt(1000);

static void (*volatile flashFnIsrSet)(void) = NULL;
static void (*flashFn)(void) = NULL;

static void ledOff() { // * Stav 2
    digitalWrite(LED1, LOW);
    flashFn = NULL;
}

static void ledOn() { // * Stav 1
    digitalWrite(LED1, HIGH);
    if (ledt.elapsed()) flashFn = ledOff;
}

static void isrHook() {
    flashFnIsrSet = ledOn;
}

void setup() {
    setupPins();
    attachInterrupt(digitalPinToInterrupt(BTN), isrHook, RISING);
}

static void flashLoop() {
    noInterrupts();
    if (flashFnIsrSet != NULL) {
        flashFn = flashFnIsrSet;
        flashFnIsrSet = NULL;
    }
    interrupts();

    if (flashFn != NULL) {
        flashFn();
    }
}

void loop () {
    flashLoop();
}