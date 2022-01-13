// Access Specifier
// Public-- can be accessed and modified from outside the class
// Private-- can not be accessed from outside the class
//Protected-- they can accessed in inherited class

#include <iostream>
using namespace std;
class MyClass
{
public:
    int x;

private:
    int y;
};

int main()
{
    MyClass Obj;
    Obj.x = 54;
    Obj.y = 62;
    return 0;
}