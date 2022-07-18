// ==================================================================================================
// Problem Statement: Define a program to add the customer details parallelly.
// Design:
// Blow are the customer details, Assume suitable types for each:
//      1.	id: < id>
//      2.	name: "user"
//      3.	phoneNumber: "9800000000"
//      4.	Create a method to add customer details
//      5.	Use aync and future concept
// Expectation:
//      1.	Print the added customer details
// ==================================================================================================

#include <iostream>
#include <future>
#include <string>
using namespace std;

int EnterId(int a) {
	return (a);
}

string UserName(string name) {
	return(name);
}

string ContactNo(string number) {
	return(number);
}

int main() {
	cout << "\nStart of the program\n";
	auto id = async(EnterId,138015);
	auto name = async(UserName, "Neha");
	auto num = async(UserName, "1234567890");
	cout << "\nDispalying User Information asynchronously\n";
	cout << "\nUser ID   : " << id.get() << endl;
	cout << "\nUser Name :" << name.get() << endl;
	cout << "\nUser Contact Number : " << num.get() << endl;
	cout << "\nEnd of the program\n";
	return 0;
}

// ==================================================================================================
// Another solution
// ================================================================================================== 
// #include<iostream>
// #include<vector>
// #include<future>
// 
// typedef std :: vector <std :: tuple <int, std :: string, long> > customerVectorRef;
// 
// int addCustomerDetails(int id, std :: string name, long phoneNumber)
// {
// 	customerVectorRef objCustomerData;
// 	objCustomerData.push_back(std :: tuple <int, std :: string, int> (id, name, phoneNumber));
// 	for(const auto &iteratorRef : objCustomerData)
//     {
// 		std :: cout << "Customer Id       : " << std :: get <0> (iteratorRef) << "\n";
// 		std :: cout << "Customer Name     : " << std :: get <1> (iteratorRef) << "\n";
// 		std :: cout << "Customer Contact  : " << std :: get <2> (iteratorRef) << "\n";
// 	}
// 	return 0;
// }
// 
// int main()
// {
// 	std :: future <int> futureObj1;
// 	std :: future <int> futureObj2;
// 
// 	futureObj1 = async(addCustomerDetails, 56, "BMW Customer", 9800000000);
// 	futureObj2 = async(addCustomerDetails, 57, "Mercedes-Benz Customer", 9900000000);
// }
