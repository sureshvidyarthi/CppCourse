// Protected access specifier
// Similar to private but it can be accessed in the inherited class:

#include <iostream>
using namespace std;

//base class
class Employee
{
protected: // Protected access specifier
    int salery;
};

// derived class
class Manager : public Employee
{
public:
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
    Manager obj;
    obj.setSalery(1000000);
    cout << "My salery is:" << obj.getSalery() << endl;
    return 0;
}