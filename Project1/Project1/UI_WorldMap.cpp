#include "UI_WorldMap.h"

UI_WorldMap::UI_WorldMap()
{

}
UI_WorldMap::~UI_WorldMap()
{

}

void UI_WorldMap::OnEnter()
{
	cout << "UI_WorldMap OnEnter() 호출" << endl;
}
void UI_WorldMap::OnExit()
{
	cout << "UI_WorldMap OnExit() 호출" << endl;
}

void UI_WorldMap::Render()
{
	cout << "UI_WorldMap Render() 호출" << endl;
}

void UI_WorldMap::UpdateState()
{
	cout << "UI_WorldMap UpdateState() 호출" << endl;
}