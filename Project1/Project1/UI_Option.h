#ifndef UI_OPTION_H
#define UI_OPTION_H

#include "Code_StateMachine.h"

class UI_Option : public State
{
public:
    UI_Option();
    ~UI_Option();

    void OnEnter();
    void OnExit();
    void Render();
    void UpdateState();
};

#endif // !UI_OPTION_H