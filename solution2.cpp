// ==================================================================================================
// Problem Statement: Implementation of a different template when a specific data type is passed as template parameter
// Design:
//      1.	Create a class which store a variable of type int and a function to print it.
//      2.	Specialized template to handle the different data type (e.g String) than the class handles.
//      3.	Pass the arguments to different objects of the template class to achieve the runtime polymorphism
// Expectations:
//      1.	Create Application with Main function
//      2.	Define class template to handle the data
//      3.	Use of specialized template to handle different data types
//      4.	Required output:
// If Int a =5 program should return a= 10
// If string abc = xyz program should return abc = xyzxyz
// ==================================================================================================

#include <iostream>

using namespace std;

template <typename T>
class A
{

public:
    T x;
    T *ptr;

   A(T add) {
    ptr = new T();
    *ptr = add+add;
    cout<< *ptr <<endl;
    }
};

int main()
{
    int i=5;
    A<int> a(i);

    float j=7.4;
    A<float> b(j);

    return 0;
}

