#include "Code_StateMachine.h"

StateMachine::StateMachine()
{
	mCurrentState = new EmptyState();
}

StateMachine::~StateMachine()
{
	delete mCurrentState;
}

void StateMachine::UpdateState()
{
	mCurrentState->UpdateState();
}

void StateMachine::Render()
{
	mCurrentState->Render();
}

void StateMachine::Change(E_UIState _stateName)
{
	mCurrentState->OnExit();
	mCurrentState = mStates.find(_stateName)->second;
	mCurrentState->OnEnter();
}

void StateMachine::Add(E_UIState _name, State* _state)
{
	mStates.insert(make_pair(_name, _state));
}