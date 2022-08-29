// ==================================================================================================
// Problem Statement: Create a user defined exception and handle it in the program,
//                    while creating an object of another class.
// Design:
// 1.	Create a class defining the exception
// 2.	Throw the exception and catch it in driver class
// Expectations:
// 1.	Create Application with Main function
// 2.	Instantiate another class .
// 3.	Throw an exception if object is already created already(not required to use singleton)
// 4.	Handle the exception thrown.
// ==================================================================================================

#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
	Base() {}
};

class Derived : public Base
{
public:
	Derived() {}
};

int main()
{
	try
	{
		throw Derived();
	}

	catch (const Derived &d)
	{
		cout << "   \nCaught Exception in Derived Class\n";
	}

	catch (const Base &b)
	{
		cout << "  \nCaught Exception in BASE Class\n";
	}

	return 0;
}
