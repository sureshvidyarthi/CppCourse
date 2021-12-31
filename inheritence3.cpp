//Multiple Inheritence
// A class can also be derived from more than one base class, using a comma-separated list

#include <iostream>
#include <string>
using namespace std;

class MyClass //first base class
{
public:
    void myFunction()
    {
        cout << "some function in parent class" << endl;
    }
};
class MyOtherClass // 2nd base class
{
public:
    void myOtherFunction()
    {
        cout << "some content in onother class";
    }
};

class MyChildClass : public MyClass, public MyOtherClass // Derived class
{
};

int main()
{
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}
