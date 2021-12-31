/*
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from

To inherit from a class, use the : symbol
-- reuse attributes and methods of an existing class when you create a new class.
*/
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{ // Base Class
public:
    string brand = "ford";
    void honk()
    {
        cout << "Tuut, tuut" << endl;
    }
};
class Car : public Vehicle
{ // Derived Class
public:
    string model = "Mustang";
    int year = 1999;
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand << " " << myCar.model << " " << myCar.year;
    return 0;
}
