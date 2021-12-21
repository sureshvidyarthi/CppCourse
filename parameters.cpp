// void myFunction(int x, int y, int z, int w)
// {

// }
// Default parameter
// yadi parameter ke sath hi argumenr pass krate hai to us parameter ko default parameter kahte hai!
#include <iostream>
#include <string>
using namespace std;

void myFunction(int x = 1, int y = 3) // Default parameters
{
    cout << x + y << endl;
}
int main()
{
    myFunction(); //1,3- Argument
    return 0;
}