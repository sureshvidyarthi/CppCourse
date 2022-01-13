// Inside class definition
#include <iostream>
using namespace std;
class MyClass //Class
{
public:               // Access Specifier
    void myFunction() // Method/ Function
    {
        cout << "I am Soni";
    }
};

int main()
{
    MyClass myObj;      // Object
    myObj.myFunction(); // Mthod/Function Call
    return 0;
}