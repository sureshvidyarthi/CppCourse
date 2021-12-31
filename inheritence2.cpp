// Multilevel inheritence
// A class can also be derived from one class, which is already derived from another class

#include <iostream>
#include <string>
using namespace std;

class MyClass //base class
{
public:
    void myFunction()
    {
        cout << "Some content in parent class";
    }
};
class MyChild : public MyClass // derived class
{
};
class MyGrandChild : public MyChild // derived class
{
};
int main()
{
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
};