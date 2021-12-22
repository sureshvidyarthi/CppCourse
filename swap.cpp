#include <iostream>
using namespace std;
void swaapNumber(int x, int &y)
{
    int z = x;
    y = z;
    x = y;
}
int main()
{
    int fNumber = 25;
    int sName = 40;
    cout << "Before Swaping" << endl;
    cout << fNumber << " " << sName << endl;

    swaapNumber(fNumber, sName);
    cout << "After Swaping" << endl;
    cout << fNumber << " " << sName << endl;
    return 0;
}