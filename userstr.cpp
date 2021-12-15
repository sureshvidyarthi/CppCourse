//WAP to print name which should be take from user

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string myName;
    cout << "Enter your full name: ";
    getline(cin, myName); //we will use getline() function to read a line text - getline(cin,myName)
    cout << "Your full name is:" << myName;

    return 0;
}
