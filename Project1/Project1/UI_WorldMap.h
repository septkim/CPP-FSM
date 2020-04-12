#ifndef UI_WORLDMAP_H
#define UI_WORLDMAP_H

#include "Code_StateMachine.h"

class UI_WorldMap : public State
{
public:
    UI_WorldMap();
    ~UI_WorldMap();

    void OnEnter();
    void OnExit();
    void Render();
    void UpdateState();
};

#endif // !UI_WORLDMAP_H