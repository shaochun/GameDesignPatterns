#pragma once


//--------------------------------------------------------------------------------
class State;

//--------------------------------------------------------------------------------
class Context
{
  private:
	State* m_State = nullptr;


  public:
	void SetState(State* theState);
	void Request(int value);
};

//--------------------------------------------------------------------------------
class State
{
  protected:
	Context* m_Context = nullptr;

  public:
	State(Context* theContext);
	virtual void Handle(int value) = 0;
};

