// Outside Constructors Definition
#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string name;
    string model;
    int year;
    Car(string x, string y, int z);
};
Car::Car(string x, string y, int z)
{
    name = x;
    model = y;
    year = z;
    cout << x << " " << y << " " << z << endl;
}
int main()
{
    Car obj1("Cycle", "Hero Royal", 1940);
    Car obj2("Riksha", "Hero Jet", 1960);
    return 0;
}