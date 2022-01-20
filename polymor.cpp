//Polymorphism

#include <iostream>
using namespace std;

//base class
class Vehicle
{
public:
    void goDelhi()
    {
        cout << "We need to any vehicle for go to Delhi" << endl;
    }
};
//derived class
class Car : public Vehicle
{
public:
    void goDelhi()
    {
        cout << "Car se 10 hours lagega" << endl;
    }
};
//derived class
class Bike : public Vehicle
{
public:
    void goDelhi()
    {
        cout << "Bike se 20 hours lagega" << endl;
    }
};
//derived class
class Train : public Vehicle
{
public:
    void goDelhi()
    {
        cout << "Train se 8 hours lagega" << endl;
    }
};
//derived class
class Flight : public Vehicle
{
public:
    void goDelhi()
    {
        cout << "Flight se 3 hours lagega" << endl;
    }
};

int main()
{
    Vehicle myVehicle;
    Car myCar;
    Bike myBike;
    Train myTrain;
    Flight myFlight;
    myVehicle.goDelhi();
    myCar.goDelhi();
    myBike.goDelhi();
    myTrain.goDelhi();
    myFlight.goDelhi();
    return 0;
}
