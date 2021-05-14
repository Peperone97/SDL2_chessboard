#ifdef _WIN32
    #include <SDL.h>
#endif
#ifdef unix
    #include <SDL2/SDL.h>
#endif
//#include "SDL2/include/SDL.h"

#include <stdio.h>

#ifndef TIMER
#define TIMER

class Timer{
public:
    Timer();
    ~Timer();
    void start();
    double getPassedTime();
    void reset();
private:
    double startTime;
    bool started;
};

#endif