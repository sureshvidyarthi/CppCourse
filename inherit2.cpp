// Multiple inheritence

#include <iostream>
using namespace std;

// 1st base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};

//2nd base class
class Mode
{
public:
    Mode()
    {
        cout << "This is driverless vehicle" << endl;
    }
};

//3rdd base class
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a four wheeler vehicle" << endl;
    }
};

// Derived class from two base class
class Car : public Vehicle, public Mode, public FourWheeler
{
};

int main()
{
    Car obj;
    return 0;
}