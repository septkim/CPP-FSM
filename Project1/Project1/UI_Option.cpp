#include "UI_Option.h"

UI_Option::UI_Option()
{

}
UI_Option::~UI_Option()
{

}

void UI_Option::OnEnter()
{
	cout << "UI_Option OnEnter() 호출" << endl;
}
void UI_Option::OnExit()
{
	cout << "UI_Option OnExit() 호출" << endl;
}

void UI_Option::Render()
{
	cout << "UI_Option Render() 호출" << endl;
}

void UI_Option::UpdateState()
{
	cout << "UI_Option UpdateState() 호출" << endl;
}