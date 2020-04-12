#include "Global.h"
#include "Code_StateMachine.h"
#include "UI_Battle.h"
#include "UI_FieldMap.h"
#include "UI_Option.h"
#include "UI_WorldMap.h"

E_UIState m_CurrentStateType = WORLDMAP;

void SetChangeState(StateMachine* _uiGameMode)
{
	_uiGameMode->Change(m_CurrentStateType);
}

int main()
{
	StateMachine* UIGameMode = new StateMachine();

	UI_WorldMap* worldmap = new UI_WorldMap();
	UI_Battle* battle = new UI_Battle();
	UI_Option* option = new UI_Option();
	UI_FieldMap* fieldmap = new UI_FieldMap();

	UIGameMode->Add(WORLDMAP, worldmap);
	UIGameMode->Add(BATTLE, battle);
	UIGameMode->Add(OPTION, option);
	UIGameMode->Add(FIELDMAP, fieldmap);

	SetChangeState(UIGameMode);
	cout << endl;

	m_CurrentStateType = OPTION;
	SetChangeState(UIGameMode);
	cout << endl;

	m_CurrentStateType = BATTLE;
	SetChangeState(UIGameMode);
	cout << endl;

	m_CurrentStateType = FIELDMAP;
	SetChangeState(UIGameMode);
	cout << endl;
	
	return 0;
}