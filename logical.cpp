#include <iostream>
using namespace std;

int main()
{
    int x = 12;
    int y = 15;
    cout << "Logical AND:" << (x > 10 && x < 13) << endl;
    cout << "Logical AND:" << (x > 15 && x < 10) << endl;
    cout << "Logical AND:" << (y > 20 && y < 18) << endl;
    cout << "LOgcal NOT:" << (!(x > 10 || x < 11)) << endl;
    return 0;
}