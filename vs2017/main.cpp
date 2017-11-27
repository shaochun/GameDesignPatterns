//--------------------------------------------------------------------------------
#include <iostream>
#include <string>

//--------------------------------------------------------------------------------
using namespace std;


//--------------------------------------------------------------------------------
class IColleague
{
	virtual string who() = 0;
};

//--------------------------------------------------------------------------------
class INice
{
	virtual string benice() = 0;
};

//--------------------------------------------------------------------------------
class Colleague : IColleague, INice
{
	//string who();
	string who()
	{
		return "this is the first colleague";
	}

	string benice()
	{
		return "proud to be the first nice";
	}

};

//--------------------------------------------------------------------------------
void main()
{
	cout << "this is a test." << endl;
	cin.get();

	auto c = Colleague();
}