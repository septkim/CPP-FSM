#ifndef UI_BATTLE_H
#define UI_BATTLE_H

#include "Code_StateMachine.h"

class UI_Battle : public State
{
public:
    UI_Battle();
    ~UI_Battle();

    void OnEnter();
    void OnExit();
    void Render();
    void UpdateState();
};

#endif // !UI_BATTLE_H