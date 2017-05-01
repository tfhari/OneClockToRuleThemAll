#ifndef ALARMSTATE_H
#define ALARMSTATE_H

#include "timekeeping.h"
#include "display.h"
#include "state.h"
#include "buttons.h"
#include "timeS.h"

extern display *disp;
extern clockLib *clk;
extern state *newState;
extern uint8_t signal;
extern Buttons *buttons;

class alarmState : public state{
public:
        alarmState(const timeS &);
        void handleInput();
        void runLogic();
        void drawFrame();
private:
        char alarmTime[7];
};

#endif
