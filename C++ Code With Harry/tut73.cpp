#include <iostream>
#include <map>
#include <string>
using namespace std;

/******Map is an associated array**********/

int main()
{
    map<string, int> marksMap;
    marksMap["Ritik"] = 98;
    marksMap["Babul"] = 88;
    marksMap["Rohan"] = 78;
    marksMap.insert({{"Rocky",92}, {"Abhishek",87}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout<<" The size is: "<<marksMap.size()<<endl;
    cout<<" The  maximum size is: "<<marksMap.max_size()<<endl;
    cout<<" The empty's return value  is: "<<marksMap.empty()<<endl;

    return 0;
}