#pragma once

class Singleton
{
  public:
	static Singleton& Instance()
	{
		//thread-safe in C++11
		static Singleton _instance;
		return _instance;
	}

	Singleton(Singleton const&)				= delete; //disable copy
	Singleton(Singleton&&)					= delete; //disable move 
	Singleton& operator=(Singleton const&)	= delete; //disable copy assign
	Singleton& operator=(Singleton&&)		= delete; //disable move assign

  protected:
	Singleton()  {}
	~Singleton() {}
};