/* Constructors 
A constructor in C++ is a special method that is automatically called when an object of a class is created.

To create a constructor, use the same name as the class, followed by parentheses ():

Note--- The constructors has the same name with as tyhe classs, it is always public, and it does not have any return value.

*/

#include <iostream>
using namespace std;

class MyClass
{       // The class
public: // Access specifier
    MyClass()
    { // Constructor
        cout << "Hello World!";
    }
};

int main()
{
    MyClass myObj; // Create an object of MyClass (this will call the constructor)
    return 0;
}