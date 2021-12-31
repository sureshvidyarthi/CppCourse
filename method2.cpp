#include <iostream>
using namespace std;

class MyClass //class
{
public:              //access specifier
    void myMethod(); //method - function declaration
};

// Method / function definition outside the class
void MyClass::myMethod()
{
    cout << "Hello World!";
}

int main()
{
    MyClass myObj;    //create  object
    myObj.myMethod(); //call the method
    return 0;
}