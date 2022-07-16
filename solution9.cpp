// ==================================================================================================
// Problem Statement: Create Container class to hold Contact list and to perform operations on it. Use STL containers.
// Design:
//  Struct 1: Create data structure with below attributes to hold Contact data
//  1.	Variables
//      a.	Contact Name
//      b.	Contact Number
//      c.	Picture File Path
// 	Class 1: Create a container Class to hold list of contact data defined in above data structure
//  1.	Functions
//      a.	Add Contact to List
//      b.	Remove Contact from List
//      c.	Search Contact with Name
//  [Choose appropriate Container type to provide optimal performance for above functions.]
//  Expectations:
//      1.	Use Access specifiers for each attribute in each class.
//      2.	Create Application with Main function.
//      3.	Create Contact Container Class object in main function
//      4.	Insert At least 5 contacts (Print list)
//      5.	Remove any one contact (Print list)
//      6.	Search Contact with name

// ==================================================================================================

#include<iostream>
#include<string>
#include<map>

using namespace std;

class ContactList {
public :
	struct contactDetails{
        string cName;
		int cNumber;
		string cPicturePath;
	};

	map<string, contactDetails> pData;

	void addPesronDetail(string cName,int cNumberData,string cPicturePathData)
	{
		contactDetails accData;
		accData.cNumber = cNumberData;
		accData.cPicturePath = cPicturePathData;
		pData.insert({cName,accData});
		cout << cName << " : " << cNumberData << " : " << " : "<< cPicturePathData <<"\n";
	}

	void removeContact(string NameData)
	{
		map<string, contactDetails>::iterator listItr;
		listItr = pData.find(NameData);

		if (listItr != pData.end())
		{
			pData.erase(pData.find(NameData));
			cout << "contact is removed from contact list." << "\n";
		}
		else
		{
			cout << "Contact is not present." << "\n";
		}
	}

	void searchContact(string NameData)
	{
	    map<string, contactDetails>::iterator listItr;
		listItr = pData.find(NameData);

		if(listItr != pData.end())
		{
			cout << "Contact Name    : " << listItr->first << "\n";
			cout << "Contact Number  : " << listItr->second.cNumber << "\n";
			cout << "Contact picture : " << listItr->second.cPicturePath << "\n";
		}
		else
		{
			cout << "Contact is not present. \n";
		}
	}
};

int main()
{
	int choice;
	int chNumber;
	string chName;
	string chPicturePath;

	ContactList *d = new ContactList;

	while (1)
	{
		cout << "Please select from below menu :" << endl;
		cout << "1.Add Contact Information." << endl;
		cout << "2.Remove Contact Information." << endl;
		cout << "3.Search Contact Information." << endl;
		cout << "4.To exit." << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter contact name: " << "\n";
			cin >> chName;
			cout << "Enter contact number: " << "\n";
			cin >> chNumber;
			cout << "Select picture path: " << "\n";
			cin >> chPicturePath;

			d->addPesronDetail(chName,chNumber,chPicturePath);
			break;
		case 2:
			cout << "Enter contact name to remove : " << "\n";
			cin >> chName;

			d->removeContact(chName);
			break;
		case 3:
		    cout << "Enter contact name to search details : " << "\n";
			cin >> chName;

			d->searchContact(chName);
			break;
		default:
			//exit(0);
			break;
		}
	}
	cin.get();
    return 0;
}
