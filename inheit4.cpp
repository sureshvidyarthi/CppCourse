// Hybrid Inheritence
#include <iostream>
using namespace std;

//base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is vehicle" << endl;
    }
};

// Base class
class Fare
{
public:
    Fare()
    {
        cout << "Fare of Vehicle" << endl;
    }
};

//derived class of Vehicle
class Car : public Vehicle
{
};

//Derived class of vehicle and fare
class Bus : public Vehicle, public Fare
{
};

int main()
{
    Bus obj;
    return 0;
}