//specifier, protected, is similar to private, but it can also be accessed in the inherited class

#include <iostream>
using namespace std;

// base class
class Employee
{
protected: // protected access specifier
    int salery;
};

// derived class
class Programmer : public Employee
{
public:
    int bonus;
    void setSalery(int s)
    {
        salery = s;
    }

    int getSalery()
    {
        return salery;
    }
};

int main()
{
    Programmer myObj;
    myObj.setSalery(1000);
    myObj.bonus = 1500;
    cout << "Salery: " << myObj.getSalery() << endl;
    cout << "Bonus:" << myObj.bonus;

    return 0;
}