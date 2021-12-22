// funnction overloading- same name with different parameters, different return type
// int myFunction(int x)
// double myFunction( double x)
//string myFunction(string name)

#include <iostream>
using namespace std;

int plusInt(int x, int y)
{
    return x + y;
}
double plusInt(double x, double y)
{
    return x + y;
}

int main()
{
    int num1 = plusInt(7, 8);
    double num2 = plusInt(5.4, 8.6);
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}