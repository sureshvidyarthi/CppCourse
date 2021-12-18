#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "Pizza"; //variable declaration
    string *ptr = &food;
    cout << ptr << endl;  //address of food
    cout << *ptr << endl; //value of that address
    return 0;
}