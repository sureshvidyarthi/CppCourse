//Pointer is a variable that stores the memory address as its value
//It is created with the *operator.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "Pizza"; //food variable type string
    string *ptr = &food;   // pointer name str that store the address of food
    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    return 0;
}