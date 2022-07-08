// ==================================================================================================
// Problem Statement: You have provided vector of N integers, then you have given 2 problem statements
//      a.	You have given position in the vector, this position in the vector needs to be erased
//      b.	You have given 2 integers denoting range of the positions in the vector
// The element fall under that range should be removed
// Note: The second statement is performed on the updated vector after problem statement 1 is executed
// Expectation: -
// 1.	Input the vector of N integers
// 2.	Input position to be erased from the vector
// 3.	Input 2 integers of position range, where the range of elements to be deleted
//      #include <cmath>
//      #include <cstdio>
//      #include <vector>
//      #include <iostream>
//      #include <algorithm>
//      using namespace std;
//
//      int main()
//      {
//    		// Enter your code here
//     		return 0;
//      }
// ==================================================================================================

#include <iostream>
#include<vector>
#include<iterator>

using namespace std;

int main() {

	int position ,range1,range2;
	vector<int> v;
	vector<int>::iterator itr;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout<<"Vector Elements are::"<<endl;
	for(itr = v.begin();itr != v.end();itr++)
	{
		cout<<*itr<<"\t";
	}
	cout<<endl;
	cout<<"Enter position to erase an vector element::"<<endl;
	cin>>position;

	v.erase(v.begin()+position-1);

	cout<<"Vector Elements after Erase::"<<endl;
	for(itr = v.begin();itr != v.end();itr++)
	{
		cout<<*itr<<"\t";
	}

	cout<<endl<<"Enter range to be deleted"<<endl;
	cout<<"Begin position::";
	cin>>range1;
	cout<<"End position::";
	cin>>range2;


	v.erase(v.begin()+range1-1,v.begin()+range2);


	cout<<"Vector Elements after Erase in range::"<<endl;
	if(v.empty())
		cout<<"Vector is empty"<<endl;
	else
	{
		for(itr = v.begin();itr != v.end();itr++)
		{
			cout<<*itr<<"\t";
		}
	}
	cout<<endl;
	return 0;
}

