// ==================================================================================================
// Problem Statement: Define a class that uses a map to store phone contacts.
// Design:
// 	Write a class that uses a map to store phone contacts. Key will the contact number value will be the name(string).
//     (a). Using iterators check if two contact numbers have same name, if yes then print name and contact number of both.
//     (b). Add a function to modify contact number using iterator.
//     (c). Use iterator to print all the keys and values
//     (d). Use iterator to find and erase an item from the map
// Expectations:
//     1.	Create class PhoneContacts
//     2.	Create Application with Main function.
//     3.	ModifyContact function
//     4.	Print details function
//     5.	Find and Erase function
//     6.	DuplicateNames function
// ==================================================================================================

#include <iostream>
#include <string>
#include <map>
using namespace std;

class PhoneContact
{
private:
    int contactNumber;
    string contactName;

public:
    map<int, string> contactMap;
    PhoneContact();
    ~PhoneContact();
    void addContact();
    void display();
    void displaySimilarContact();
    void modifyFunction(int contactNo, int modifiedNum);
    void eraseContact(int contactNum);
    void getContactNumber(int contact_Num)
    {
        contactNumber = contact_Num;
    }

    void getContactName(string contact_Name)
    {
        contactName = contact_Name;
    }
};

PhoneContact::PhoneContact()
{
}

PhoneContact::~PhoneContact()
{
}

void PhoneContact::addContact()
{
    for (int i = 0; i < 10; i++)
    {

        contactMap.insert(pair<int, string>(contactNumber, contactName));
    }
}

void PhoneContact::display()
{
    for (auto it = contactMap.begin(); it != contactMap.end();
         it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

void PhoneContact::displaySimilarContact()
{

    map<int, string>::iterator it = contactMap.find(contactNumber);
    cout << it->first << "  " << it->second << endl;
}

void PhoneContact::modifyFunction(int contact_number, int modifiedNum)
{
    map<int, string>::iterator it = contactMap.find(contactNumber);
    if (it != contactMap.end())
        swap(contactMap[modifiedNum], it->second);
    // Erase old key-value from map
    contactMap.erase(it);
    cout << it->first << " " << it->second << endl;
}
void PhoneContact::eraseContact(int contactNum)
{
    contactMap.erase(contactNum);
    cout << "Contact Erased" << endl;
}

int main()
{

    PhoneContact phoneContactList;
    int phoneNumber;
    int modifiedNum;
    int erasedNum;
    int no_to_be_modified;
    string contact_Name;

    cout << "Enter contact number and contact name: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> phoneNumber >> contact_Name;
        phoneContactList.getContactName(contact_Name);
        phoneContactList.getContactNumber(phoneNumber);
        phoneContactList.addContact();
    }

    cout << "Display contact number and contact name: " << endl;
    phoneContactList.display();

    cout << "Display  Similar Contact : " << endl;
    phoneContactList.displaySimilarContact();

    cout << "Enter the contact number which you want to modify :" << endl;
    cin >> no_to_be_modified;

    cout << "Enter modified contact num" << endl;
    cin >> modifiedNum;

    phoneContactList.modifyFunction(phoneNumber, modifiedNum);

    cout << "Enter contact number need to be erased" << endl;
    cin >> erasedNum;
    phoneContactList.eraseContact(erasedNum);

    return 0;
}
