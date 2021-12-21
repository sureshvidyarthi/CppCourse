//Multiple parameters
// jis type ka parameter hoga usi type ka argument pass karana hoga!
#include <iostream>
#include <string>
using namespace std;

void myName(string name, int age)
{
    cout << "My Name is " << name << ", " << age << " Years old" << endl;
}
int main()
{
    myName("Soni", 24);
    return 0;
}