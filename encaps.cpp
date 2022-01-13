/*

If we want to others to access or modify the value of member, 
we can provide public get and set methods.

----> To access a private attribute, we will use public "get" and "set" method.
*/
#include <iostream>
using namespace std;
class Employee
{
private:
    int salery;

public:
    void setSalery(int s)
    {
        salery = s;
    }

public:
    int getSalery()
    {
        return salery;
    }
};
int main()
{
    Employee obj;
    obj.setSalery(100000);
    cout << "Salery is:" << obj.getSalery();
    return 0;
}
