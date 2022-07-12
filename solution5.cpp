// ==================================================================================================
// Problem Statement: You have two classes Prime1, Prime2 both this classes implement their own
// version of function “evaluate”
// In class prime1, evaluateFunc multiply the value passed by 3:
//      class Prime1 {
//          public:  Prime1() {varPrime1 = 0;}
//          private:  int varPrime1; void calc () {varPrime1++;}
//          protected:  void evaluate (int & Val) {Val = Val * 3; calc ();}
//          public:        int getPrime1() {return varPrime1;}
//      };
//
// In class prime2, evaluateFunc multiply the value passed by 5:
//      class Prime2 {
//          public:  Prime2() {varPrime2 = 0;}
//          private:  int varPrime2; void calc () {varPrime2++;}
//          protected:  void evaluate (int & Val) {Val = Val * 5; calc ();}
//          public:        int getPrime2() {return varPrime2;}
//      };
//      class PrimeImplement {
//      	int valPrime;
//      public:
//       	PrimeImplement() {valPrime = 1;}
// 	    	// Implement this function
//          // Write code here
// 	        void update_prime(int new_val){
//  	    }
//      };
// Expectation:  You need to modify the PrimeImplement’s function update_prime, this function should
// update PrimeImplement’s valPrime variable only by calling Prime1, Prime2’s evaluate function
// Note: It is guaranteed that new_val of update_prime function has 3 and 5 as its prime factors
// Sample Input: new_val = 15

// ==================================================================================================

#include <iostream>
using namespace std;


class Prime1{
	public:
	Prime1() {
		varPrime1 = 0;
	}
	private:
	int varPrime1;
	void calc()
	{
		varPrime1++;
	}
	public:
	 void evaluate (int & Val)
	{
    Val = Val * 3;
	calc ();
	}
	public:
	int getPrime1()
	{
		return varPrime1;
	}
	};

class Prime2 {
public:
	Prime2()
{
		varPrime2 = 0;
}
private:
	int varPrime2;
	void calc ()
	{
		varPrime2++;
	}
public:
	 void evaluate (int & Val)
	{
		Val = Val * 5;
		calc ();
	}
public:
	int getPrime2()
	{
		return varPrime2;
	}
};

class PrimeImplement{
	int valPrime;
public:
 	PrimeImplement()
	{
 		valPrime = 1;
	}
	void update_prime(Prime1 &prime1obj,Prime2 &prime2obj,int new_val){

		prime1obj.evaluate(new_val);
		cout<<"Updated value for prime1 class :"<<new_val<<endl;

		prime2obj.evaluate(new_val);
		cout<<"Updated value for prime2 class :"<<new_val<<endl;

		valPrime++;
		cout<<"updated value"<<valPrime<<endl;

		}
};

int main() {
	 Prime1 prime1=Prime1();
	 Prime2 prime2 = Prime2();
	 PrimeImplement primeimplement=PrimeImplement();
	 primeimplement.update_prime(prime1,prime2,10);
	 return 0;
}
