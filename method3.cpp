// we can add also parameters

#include <iostream>
using namespace std;

class MyClass //class
{
public: //access specifier
    int speed(int maxSpeed);
};
int MyClass::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    MyClass myObj;
    cout << myObj.speed(500);

    return 0;
}