#ifndef _timer_h_
#define _timer_h_

/*
    Jednoduchý časovač. 
    
    Používá fci. millis. Pamatuje si čas posledního spuštění a kontroluje, 
    jestli už neuplynula nastavená doba a není třeba něco dělat.
*/

class Timer {
public:
    Timer(unsigned long);

    bool elapsed();
    void reset();
    void reset(unsigned long);

    unsigned long interval;
private:
    unsigned long last;
};

#endif 
