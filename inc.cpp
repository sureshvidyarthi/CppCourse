#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int y = 36;
    x = ++x;   //increment operator
    y = --y;   //decrement operator
    cout << x; //print(26)
    cout << y; //print(35)

    return 0;
}