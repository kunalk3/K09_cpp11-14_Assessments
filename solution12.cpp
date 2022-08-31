// ==================================================================================================
// Problem Statement:  Define a Class & its functionality to demonstrate usage of constexpr, auto, 
// decltype, nullptr, static_assert etc. i.e. any 3 of the basic modern C++ constructs 
// 
// Design:  
// Implement a MinimumQ data structure that can store comparable elements and supports the queue 
// operations add(x), remove(), and size(), as well as the min() 
// operation, which returns the minimum value currently stored in the data structure 
//  
// Expectations: 
//       1.	Demonstrate usage of the basic modern C++ constructs like constexpr, auto, decltype, nullptr, static_assert etc. 
// ==================================================================================================

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Use of constexpr
constexpr int product(int a, int b)
{
	return (a * b);
}

int main()
{
	//vector
	vector<int> v1{ 10, 20, 30, 40, 50 };
	vector<int>::iterator it;
	const int x =  product(2, 3);
	cout << "\n Use of Constexpr :" << x<<endl;
	//Use of decltype
    decltype(2) j;
	cout <<"\n Type of x ( use of Decltype ) : "<< typeid(j).name()<<endl;
	//Add element
	v1.insert(v1.end(), x);
	cout << "\n vector elements after insertion" << endl;
	for (auto x : v1)
		cout << x << " ";
	cout << endl;

	//Remove Element
	it = v1.begin();
	v1.erase(it);


	//printing elements
	cout << "\n vector elements after deleting." << endl;
	for (auto x : v1)
		cout << x << " ";
	cout << endl;

	cout << "\n Size of List : " << v1.size() << endl;

	//finding the minimum element
	auto min = *min_element(v1.begin(), v1.end());

	cout << "\n minimum/smallest element is: " << min << endl;

	return 0;
}