// Constructors Parameters

/*
Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
*/

#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z) // Constructor with parameters
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    Car carObj1("BMW", "X5", 1999); // Create Car objects and call the constructor with different values
    Car carObj2("Ford", "Mustang", 1999);
    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    return 0;
}