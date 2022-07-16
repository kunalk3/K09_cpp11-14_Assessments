// ==================================================================================================
// Problem Statement: Define a Button Classes to demonstrate inheritance using Virtual Functions
// Design:
// 	Class 1: Define a Define Base class as Button, this class must have below attributes
//  1.	Enumerations:
//      a.	Enumeration to list all Button states (Pressed, Released)
//  2.	Functions
//      a.	Constructor
//      b.	Destructor
//      c.	Function to generate states on
//      d.	Handler function for each state
//          i.	onPressed
//          ii.	onReleased
//      e.	Virtual Method Paint to draw Button
//  Class 2: Create Child Class as SquareButton inherited from Button
//  1.	Functions
//      a.	Implement necessary functions from Base Class to redraw button as square
//          (Draw implementation not necessarily required, only print statement is OK)
//  Class 3: Create Child Class as CircularButton inherited from Button
//  1.	Functions
//      b.	Implement necessary functions from Base Class to redraw button as Circular
//          (Draw implementation not necessarily required, only print statement is OK)
// Expectations:
//      1.	Use Access specifiers for each attribute in each class.
//      2.	Create Application with Main function.
//      3.	Create Button Class pointer holding object for SquareButton
//      4.	Create Button Class pointer holding object for CircularButton
//      5.	Call Paint functions for all objects created above.
//      6.	Print appropriate output from each function
// ==================================================================================================

#include <iostream>
#include<string>

using namespace std;

class ButtonState
{
    public:
    string btnState;

    ButtonState(string btnStateIs)
    {
        btnState = btnStateIs;
    }

    void getButtonState()const
    {
        cout << btnState << endl;
    }
};

class Button
{
    public:
    Button()
    {  }

    friend class ButtonState;
    virtual void Point(void) = 0;
    virtual void ButtonStateIs(ButtonState* btnState)
    {  }

    virtual ~Button()
    {  }
 };
 class SquareButton : public Button{

public:
    SquareButton()
    {  }

    void Point()
    {
        cout << "Button is pointing is Square button.\n";
    }

    void ButtonStateIs(ButtonState* btnState)
    {
        cout<< "Square button state (status): " << btnState->btnState << "\n";
    }

    ~SquareButton()
    {  }
 };

class CircularButton : public Button
{
public:
    CircularButton()
    {  }

    void Point()
    {
        cout<< "Button is pointing is Circular button.\n";
    }

    void ButtonStateIs(ButtonState* btnState)
    {
        cout<< "Circular button state (status): "<< btnState->btnState << "\n";
    }

    ~CircularButton()
    {  }
};

int main()
{
    ButtonState b(" Pressed");
    cout<<"ButtonState is :";
    b.getButtonState();

    Button *b1;
    SquareButton obj1;
    b1= &obj1;
    b1->Point();
    b1->ButtonStateIs(&b);

    Button *b2;
    CircularButton obj2;
    b2=&obj2;
    b2->Point();
    b2->ButtonStateIs(&b);

    return 0;
}
