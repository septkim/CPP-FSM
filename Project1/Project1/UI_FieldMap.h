#ifndef UI_FIELDMAP_H
#define UI_FIELDMAP_H

#include "Code_StateMachine.h"

class UI_FieldMap : public State
{
public:
    UI_FieldMap();
    ~UI_FieldMap();

    void OnEnter();
    void OnExit();
    void Render();
    void UpdateState();
};

#endif // !UI_FIELDMAP_H