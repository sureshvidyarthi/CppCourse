#include <iostream>
using namespace std;
int main()
{
    int day = 6;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thrusday";
        break;
    case 5:
        cout << "Friday";
        break;
    default:
        cout << "Sunday";
    }

    return 0;
}