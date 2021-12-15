//string Concatenation : + operator can be used b/t strings to add them together to make a new string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "Soni";
    string lastName = "Kumari";
    string fullName = firstName + lastName;
    cout << "Full Name is: " << fullName;
    return 0;
}