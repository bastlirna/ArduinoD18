#ifndef _scheduler_h_
#define _scheduler_h_

#include <Timer.h>

/*
    Jednoduchý "plánovač". 
    
    
*/

typedef void (*fn)(void);

class Scheduler {
public:
    Scheduler(fn, unsigned long);

    void next(fn);
    void next(fn, unsigned long);

    void loop();

    unsigned long interval = 0;
private:
    fn nextFn = nullptr;
    Timer timer = Timer(0);
};

#endif 
