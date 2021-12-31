/*
The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of
 a class can be accessed. In the example above, the members are public - which means that they can be accessed 
 and modified from outside the code

 ---In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. -- Inheritence

Note-- By Default, all the members of a class are private if we don't specify an access specifier
*/

#include <iostream>
using namespace std;

class Class
{
public:    //public specifier
    int x; // public attribute

    // private: // private specifier
    int y; // private attributes
};

int main()
{

    Class obj;
    cout << obj.x << endl; // allowed (public)
    cout << obj.y << endl; //not allowed(private)

    return 0;
}
// it is possible to access private members of a class using a public method inside the same class.
// In which Encapsulation concept we will learn