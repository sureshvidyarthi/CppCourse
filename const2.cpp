//Inside Definition
#include <iostream>
#include <string>
using namespace std;

class Gaddi
{
public:
    string name;
    string model;
    int year;
    Gaddi(string x, string y, int z)
    {
        name = x;
        model = y;
        year = z;
        cout << name << " " << model << " " << year << endl;
    }
};
int main()
{
    Gaddi gaddiObj1("Hero Royal", "ABC", 1940);
    Gaddi gaddiObj2("Hero Jet", "XYZ", 1960);
    return 0;
}