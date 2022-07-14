// ==================================================================================================
// Problem Statement: Define a Money class, suitable for storing money information.
// Design:
//      a.	Class objects should contain two int fields: euros and centimes.
//      b.	Write for the class appropriate constructors and get/set methods to allow the user to access its data.
//      c.	Also write a print method that prints out an object's info. Overload the + operator, so that adding
//          two objects of this class works.
//      d.	As an added requirement, after adding two Money objects, values of more than 100 centimes should be
//          converted to euros.
// Expectations:
//      1.	Use Access specifiers for each attribute in class.
//      2.	Create Application with Main function.
// Print appropriate output from each function
// ==================================================================================================

#include<iostream>
using namespace std;

class Money{
private:

    int euros;
    int centimes;

public:

    Money(){}

    Money(int euros,int centimes){
        this->euros=euros;
        this->centimes=centimes;
    }

    void addMoney(int euros,int centimes){
        this->euros=this->euros+euros;
        this->centimes=this->centimes+centimes;

        if(this->centimes >= 100){
            this->centimes=this->centimes - 100;
            this->euros=this->euros + 1;
        }
    }

    void showMoney(){
        cout<<"You have :"<<this->euros<<" euros and "<<this->centimes<<" centimes"<<endl;
    }

    Money operator +(Money const  &obj){
        Money temp;
        temp.euros= euros + obj.euros;
        temp.centimes = centimes + obj.centimes;

        if(temp.centimes >= 100){
            temp.centimes=temp.centimes - 100;
            temp.euros=temp.euros + 1;
        }
        return temp;
    }

};

int main(){

    Money obj1(10,95);
    Money obj2(9,20);

    obj1.showMoney();
    obj1.addMoney(5,7);
    obj2.addMoney(0,90);
    obj1.showMoney();
    obj2.showMoney();

    Money obj3;
    obj3=obj1+obj2;
    obj3.showMoney();
    return 0;
}
