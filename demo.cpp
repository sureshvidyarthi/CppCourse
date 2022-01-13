#include <iostream>
using namespace std;

class Car
{                     // class
public:               // access specifier
    int number;       // attribute
    void myFinction() // method
    {
        cout << "This is My Car";
    }
};

int main()
{
    Car myObj;
    myObj.myFinction();
    return 0;
}