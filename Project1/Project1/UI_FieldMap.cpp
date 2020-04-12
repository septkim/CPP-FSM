#include "UI_FieldMap.h"

UI_FieldMap::UI_FieldMap()
{

}
UI_FieldMap::~UI_FieldMap()
{

}

void UI_FieldMap::OnEnter()
{
	cout << "UI_FieldMap OnEnter() 호출" << endl;
}
void UI_FieldMap::OnExit()
{
	cout << "UI_FieldMap OnExit() 호출" << endl;
}

void UI_FieldMap::Render()
{
	cout << "UI_FieldMap Render() 호출" << endl;
}

void UI_FieldMap::UpdateState()
{
	cout << "UI_FieldMap UpdateState() 호출" << endl;
}