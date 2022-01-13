// Multilevel Inheritence

#include <iostream>
using namespace std;
// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is Vehicle" << endl;
    }
};

//Derived class of Vehicle
class TwoWheeler : public Vehicle
{
public:
    TwoWheeler()
    {
        cout << "This is twowheeler vehicle" << endl;
    }
};

// Derived class of TwoWheeler
class Bike : public TwoWheeler
{
public:
    Bike()
    {
        cout << "Bike has 2 wheels" << endl;
    }
};

int main()
{
    Bike obj;
    return 0;
}