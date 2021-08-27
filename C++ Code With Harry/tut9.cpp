#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age " << endl;
    cin >> age;
    //Selection control structure : if else ladder.
    if ((age < 18) && (age >= 0))
    {
        cout << "you can't drive ." << endl;
    }
    else if (age == 18)
    {
     cout<< "you can apply for driving license & after aceptance u can drive."<< endl;
    }
    else
    {
     cout<< "you can drive but having a driving license is cumpulsory."<< endl;
    }
    //Selection contorl structure :: switch statement.
    switch (age)
    {
    case 18:
           cout<<"You can drive"<<endl;
        break;
    case 15:
           cout<<"You can't drive"<<endl;
        break;
    
    default:
      cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}