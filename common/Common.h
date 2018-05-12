#include <Arduino.h>

#define LED1 13
#define LED2 17
#define LED3 16
#define BTN 2

// jen kvuli kompilaci - nezpůsobí, že kód bude magicky fungovat paraelně ;)
#define RUN

#define cli()
#define sei()


void setupPins();

void toggle(uint8_t);
void semafor(bool, bool, bool);
