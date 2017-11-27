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

	Singleton(Singleton const&)				= delete; //copy construct
	Singleton(Singleton&&)					= delete; //move construct
	Singleton& operator=(Singleton const&)	= delete; //copy assign
	Singleton& operator=(Singleton&&)		= delete; //move assign

  protected:
	Singleton() {}
	~Singleton() {}
};