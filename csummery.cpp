// OPPs - classes and objects
// C++ --> Initially called  C with classes by stroustoup
// class - extension of structure
// structure had limitations
// -- members are public
// -- no methods

// classes--> structure + more
//-- can have methods and properties
// --can make few members as private and few as public

// structure in c+= are typedef
// you can declare objects along with the class declaration
#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void setPrice()
{
    cout << "Enter Id of item no:" << couner + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id" << itemId[i] << "is" << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}