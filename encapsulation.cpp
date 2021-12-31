/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, 
you must declare class variables/attributes as private (cannot be accessed from outside the class). 
If you want others to read or modify the value of a private member, 
you can provide public get and set methods.

Access private members--- to access a private attribute, use public "get" and "set" methods inside the class.

--- It is considered good practice to declare your class attributes as private (as often as you can).
 Encapsulation ensures better control of your data, because you (or others) can change one part of the 
 code without affecting other parts

 ----Increased security of data
*/

#include <iostream>
using namespace std;

class Employee
{
private: //private
    int salery;

public:
    void setSalery(int s) //setter
    {
        salery = s;
    }
    int getSaley() //Getter
    {
        return salery;
    }
};

int main()
{
    Employee myObj;
    myObj.setSalery(10000);
    cout << "Salery is: " << myObj.getSaley();
    return 0;
}
