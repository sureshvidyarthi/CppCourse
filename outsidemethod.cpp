// Outside class definition
// ::-- Scope resolution operator
#include <iostream>
using namespace std;
class MyClass
{
public:
    void myFunction(); // methpd/function declaration
};

// method/function definition outside the class
void MyClass::myFunction()
{
    cout << "I am Soni Kumari";
}
int main()
{
    MyClass myObj;      // object of MyClass
    myObj.myFunction(); // call the method / function
    return 0;
}