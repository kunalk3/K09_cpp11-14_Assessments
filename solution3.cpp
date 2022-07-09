// ==================================================================================================
// Problem Statement: In code, showcase use of std::function for following actions from main().
//      std::function<int(int,int)> operations[n];
//      operations[0] = divide();
//      operations[1] = multiply();
//      operations[2] = subtract();
//      operations[3] = add();
//
// And call desired operation like int d = operations[0](10,5);
// Divide, multiply etc should be classes with operator() overloaded.
// ==================================================================================================

#include <iostream>
#include <functional>
#include <map>

using namespace std;

int main(){


  std::map< const char , std::function<double(double,double)> > operations
  {
    {0,[](double a, double b){ return a / b;} },
    {1,[](double a, double b){ return a * b;} },
    {2,[](double a, double b){ return a - b;} },
    {3,[](double a, double b){ return a + b;} }
  };

   cout << "7.2/4.1= " << operations[0](7.2,4.1) <<endl;
   cout << "7.2*4.1= " << operations[1](7.2,4.1) << endl;
   cout << "7.2-4.1= " << operations[2](7.2,4.1) << endl;
   cout << "7.2+4.1= " << operations[3](7.2,4.1) << endl;
};
