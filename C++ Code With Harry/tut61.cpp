#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //connecting our file with hout stream.
    ofstream hout("sample60a.txt");//-->Write operator.

    //Creating a name string and filling it with the string entered by the user.
    string name;
    cout << "Enter your name " << endl;
    cin >> name;

    //Writing a string to the file.
    hout << name + " is my name. ";
    hout.close();

    ifstream hin("sample60a.txt");//--> Read Operator.
    string content;
    hin >> content;
    cout << " The content of this file is : " << content << endl;
    hin.close(); 
    return 0;
}