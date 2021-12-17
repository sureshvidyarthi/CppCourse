//Array is colection of simillar data type of elements
//array are used to store multiple value of similar data type in single variable

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cars[6] = {"Ford", "Creta", "Mazda", "BMW", "Auto", "Riksha"};
    // cars[0] = "Audi";
    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << cars[3] << endl;
    cout << cars[4] << endl;
    cout << cars[5] << endl; //we can access array elements by index number
    return 0;
}