// Hierarchical Inheitence
#include <iostream>
using namespace std;

//base class
class Vegitable
{
public:
    Vegitable()
    {
        cout << "This is vegitable" << endl;
    }
};

//1st derived class of base class
class Aaloo : public Vegitable
{
};

//2nd derived class of base class
class Pyaj : public Vegitable
{
};
int main()
{
    Aaloo obj1;
    Pyaj obj2;
    return 0;
}