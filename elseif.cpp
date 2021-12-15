//if (condition1) {
// block of code to be executed if condition1 is true
//} else if (condition2) {
// block of code to be executed if the condition1 is false and condition2 is true
//} else {
// block of code to be executed if the condition1 is false and condition2 is false
//}
#include <iostream>
using namespace std;
int main()
{
    int age = 24;
    if (age < 18)
    {
        cout << "Teenager" << endl;
    }
    else if (age > 30)
    {
        cout << "30+";
    }
    else
    {
        cout << "18+";
    }

    return 0;
}