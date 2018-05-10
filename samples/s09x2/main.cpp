#include <Common.h>

/*
    Úkrok stranou - ukazatel na funkce
*/



void setup() {

}

void loop () {
    Serial.print("A:");
    Serial.println(a);

    Serial.print("Ukazatel na A:");
    Serial.println((unsigned long)&pa);

    Serial.print("Hodnota ukazatele na A:");
    Serial.println(*pa);

    delay(5000);
}