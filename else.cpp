// else- use the "else" statement if condition is false

/*
if(condition){
    code
}
else{
    code
}
*/

#include <iostream>
using namespace std;
int main()
{
    int age = 18;
    if (age < 16)
        cout << "Teenager";
    else
    {
        cout << "18+";
    }

    return 0;
}