#include <iostream>
using namespace std;

class MyCar
{
public:
    string carName;
};

int main()
{
    MyCar myObj;
    myObj.carName = "Audi";

    cout << "Car Name is: " << myObj.carName;
    return 0;
}