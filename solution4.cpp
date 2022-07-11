// ==================================================================================================
// Problem Statement: Create a product sum system that overloads the possible mathematical operators
// Design:
// Create a product sum system that overloads the possible mathematical operators as Given below
//    (a). The class should contain item name, per unit price, count of similar item, discount, total amount.
//    (b). The class should overload operators(+,-,++, --) such that when the two objects are added,
//         count should be increased if similar items, amount and total amount should be adjusted as per the items.
//    (c). Similarly to point (b), subtraction, increment and decrement operators should be overloaded.
//    (d). Overload << operator such that it should print all the information of the object such as, name, count,
//         per unit price and total etc.
// Please note that different items should be different objects of the class, and it should contain a grant total
// amount variable(static). Add corresponding functions to support the class such as Enter product details.
// Expectations:
//      1.	Creation of class ProductSumSystem
//      2.	Use of mathematical operator overloading ++, –-, +, - operators
//      3.	Create Application with Main function.
//      4.	Overload insertion operator
//      5.	Runnable program

// ==================================================================================================

#include <iostream>
#include<string.h>
#include <stdio.h>

using namespace std;

class ProductSumSystem
{
private:
    string product;
    int Per_unit_price;
    int same_item_count;
    int Discount;
    int total;


public:

    ProductSumSystem() {
    }
     void getProductName(string product1){
         product=product1;

     }
     void getProductPrice(int ItPrice){
         Per_unit_price=ItPrice;
     }
     void DisplayProductPrice(void){
         cout<<"Product Price of:"<<product<<"is->"<<Per_unit_price<<endl;
     }

     ProductSumSystem operator +(ProductSumSystem & psm){
         ProductSumSystem p;
         p.Per_unit_price=this->Per_unit_price+psm.Per_unit_price;
         return (p);
     }
     ProductSumSystem operator -(ProductSumSystem & psb){
         ProductSumSystem ps;
         ps.Per_unit_price=this->Per_unit_price+psb.Per_unit_price;
         return (ps);
     }
     void operator ++(){
         same_item_count=same_item_count+1;
     }
     friend ostream &operator<<( ostream &output, const ProductSumSystem &p ) {
         output << "Product : " << p.product <<endl<< " Per_unit_price : " <<p.Per_unit_price<<endl<<"Count:"<<p.same_item_count <<endl<< "Discount:" <<p.Discount << endl<<"Total:"<<p.total;;
         return output;
      }

};

int main()
{
   ProductSumSystem psm1,psm2,psm;
   ProductSumSystem psb,psb1,psb2;
   string I1;
   string I2;
   cout<<"Enter the Product Name:"<<endl;
   cin>>I1;
   psm1.getProductName(I1);
   psm1.getProductPrice(100);
   cout<<"Enter the Product Name:"<<endl;
   cin>>I2;
   psm2.getProductName(I2);
   psm2.getProductPrice(200);
   int stringResult=I1.compare(I2);
   if(stringResult==0){

       psm=psm1+psm2;
       psm.DisplayProductPrice();
       cout<<endl;
   }else{
       cout<<"Product"<<I2<< ":is Newly added"<<endl;
   }

   cout<<"Enter the Product Name:"<<endl;
   cin>>I1;
   psb1.getProductName(I1);
   psb1.getProductPrice(100);
   cout<<"Enter the Product Name:"<<endl;
   cin>>I2;
   psb2.getProductName(I2);
   psb2.getProductPrice(200);
   int stringResult1=I1.compare(I2);
   if(stringResult1==0){

       psb=psb1+psb2;
       psb.DisplayProductPrice();
       cout<<endl;
   }else{
        cout<<"Product"<<I2<< ":is Newly added"<<endl;
   }
   cout<<I1<<endl<<I2<<endl;
    return 0;
}

