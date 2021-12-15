//Array is colection of simillar data type of elements
//array are used to store multiple value of similar data type in single variable

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cars[4] = {"Ford", "Creta", "Mazda", "BMW"};
    cars[0] = "Audi";
    cout << cars[0]; //we can access array elements by index number
    return 0;
}