#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cars[6];
    cars[0] = "Auto";
    cars[1] = "Riksha";
    cars[2] = "Cycle";
    cars[3] = "Audi";
    cars[4] = "Mazda";
    cars[5] = "Ford";
    for (int i = 5; i >= 0; i--)
    {
        cout << cars[i] << endl;
    }
    return 0;
}