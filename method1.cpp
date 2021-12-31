//there are two way to define functions that belongs to a class
//1. inside class definition
//2. outside class definition

//this is the example of inside

// for inside-- "myMethod"
#include <iostream>
using namespace std;

class MyClass //class
{
public:             //access specifier
    void myMethod() //method
    {
        cout << "Hello World!";
    }
};

int main()
{
    MyClass myObj;    // object
    myObj.myMethod(); //call the method
    return 0;
}
