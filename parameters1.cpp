//Multiple parameters
// jis type ka parameters hoga usi type ka argument pas karana hoga!
//hm jitna parameter pass krenge , utna hi argument pas krana hoga!
// order same hona chahiye!
#include <iostream>
#include <string>
using namespace std;

void myName(string name, int age, string address)
{
    cout << "My Name is " << name << ", " << age << " Years old" << address << endl;
}
int main()
{
    myName("Soni", 24, " Bhagalpur");
    return 0;
}