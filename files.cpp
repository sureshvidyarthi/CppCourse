//Files in C++
/*
file libraray--> fstream
#include<iostream>
#include<fstream>

combination of-- ofstream and ifstream (creates, reads and writes to file)
ofstream--> Creates and writes to files
ifstream--> Reads from files
*/

// Create and write to file
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ofstream MyFile("index.html");

//     MyFile << "This is html file, which created by me";
//     MyFile.close();
// }

//Read file
// To read from a file, use either the ifstream or fstream and name of the file
/*
 we also use a while loop together with the getline() function to read the file
line by line and print the content of the file
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream MyFile("style.txt");
    MyFile << "This is Text File";
    MyFile.close();

    string myText;
    ifstream MyReadFile("style.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    MyReadFile.close();
}