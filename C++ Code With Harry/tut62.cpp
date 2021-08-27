#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60a.txt");
    out << "This is me" << endl;
    out << "This is also me" << endl;
    out << "This is alsi me" << endl;
    out.close();

    ifstream in;
    string st;
    in.open("sample60a.txt");
    //in>>st>>st2;
    //cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}