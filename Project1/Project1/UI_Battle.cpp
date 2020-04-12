#include "UI_Battle.h"

UI_Battle::UI_Battle()
{

}
UI_Battle::~UI_Battle()
{

}

void UI_Battle::OnEnter()
{
	cout << "UI_Battle OnEnter() 호출" << endl;
}
void UI_Battle::OnExit()
{
	cout << "UI_Battle OnExit() 호출" << endl;
}

void UI_Battle::Render()
{
	cout << "UI_Battle Render() 호출" << endl;
}

void UI_Battle::UpdateState()
{
	cout << "UI_Battle UpdateState() 호출" << endl;
}