#ifndef CODE_STATEMACHINE_H
#define CODE_STATEMACHINE_H

#include "Global.h"
#include <map>

class State
{
public:
	State() {}
	~State() {}

	virtual void UpdateState() = 0;
	virtual void Render() = 0;
	virtual void OnEnter() = 0;
	virtual void OnExit() = 0;
};

class EmptyState : public State
{
public:
	EmptyState() {}
	~EmptyState() {}

	virtual void UpdateState()
	{
		cout << "EmptyState UpdateState() 호출" << endl;
	}
	virtual void Render()
	{
		cout << "EmptyState Render() 호출" << endl;
	}
	virtual void OnEnter()
	{
		cout << "EmptyState OnEnter() 호출" << endl;
	}
	virtual void OnExit()
	{
		cout << "EmptyState OnExit() 호출" << endl;
	}
};

class StateMachine
{
private:
	map<E_UIState, State*> mStates;
	State* mCurrentState;

public :
	StateMachine();
	~StateMachine();

	void UpdateState();
	void Render();
	void Change(E_UIState _stateName);
	void Add(E_UIState _name, State* _state);

};

#endif // !CODE_STATEMACHINE_H