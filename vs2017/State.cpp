#include "State.h"
#include <iostream>
#include <string>

//--------------------------------------------------------------------------------
using namespace std;

//--------------------------------------------------------------------------------
void Context::Request(int value)
{
	m_State->Handle(value);
}

//--------------------------------------------------------------------------------
void Context::SetState(State* theState)
{
	//Debug.Log("Context.SetState:" + theState);
	cout << "Context.SetState: " << theState << endl;
	m_State = theState;
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
State::State(Context* theContext)
{
	m_Context = theContext;
}