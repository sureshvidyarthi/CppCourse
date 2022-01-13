/*
car--> BMW, Audi, Alto,
Truck--> Mahindra, Tata, Thar 
Train--> RE, SK, GR
--> To inherit attributes and methods from one class to another class. 
1. base/parent class 
2. derived/child class
*/

#include <iostream>
using namespace std;
// Base parent
class Vehicle
{
public:
    string brand = "Audi";
    void horn()
    {
        cout << "Peeee Peepeeee, peeeeppppepepp" << endl;
    }
};
// 1st Derived class
class Car : public Vehicle
{
public:
    string model = "X500";
};
//2nd Derived class
// class Truck : public Vehicle
// {
// public:
//     string brand = "Mahindra";
//     string model = "Thar001";
// };
int main()
{
    Car myCar;
    // Truck myTruck;
    myCar.horn();
    cout << myCar.brand << " " << myCar.model << endl;
    // cout << myTruck.brand << endl;
    // cout << myTruck.model << endl;
    // myTruck.horn();

    return 0;
}