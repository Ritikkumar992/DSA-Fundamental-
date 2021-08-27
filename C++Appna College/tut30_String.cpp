#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s; //string decalaration.
    cin>>s;
    cout<<s;
    //Different ways to decalare string::

    //1.Ways:
    string s1(5,'n');
    cout<<s1<<" ";

    //2.Ways:
    string s2 = "RITIKKUMAR";
    cout<<s2;

    //3.Waya:
    string s3;
    getline(cin,s3); //to input whole line.
    cout<<s3<<endl;
    
    //Difffernt functions of string::

    //1.Append function.
    string s1 = "fam";
    string s2 = "ily";

  /*  s1.append(s2);
    cout<<s1<<endl; */
    cout<<s1+s2<<endl;

    //2.TO access a particular character.
    cout<<s1[1]<<endl;

    //3.clear Function.
    string abc = "sasdfjfadfdjcadla dsakf dlsas";
    abc.clear();
    cout<<abc;

    //4.TO compare two string.

    string st1 = "abc";
    string st2 = "xyz";
    if(st1.compare(st2) == 0){
        cout<<"String are equal "<<endl;
    }
    else{
        cout<<"string are  not equal "<<endl;
    }
    cout<<st2.compare(st1)<<endl;

    //5.Empty Function
    s1.clear();
    if(s1.empty()){
        cout<<"String is empty "<<endl;
    }
    else{
        cout<<"string is not empty"<<endl;
    }
    //6.Erase Function
    string ss1 = "nincompoop";
    ss1.erase(3,4);
    cout<<ss1<<endl;

    //7.Find Function
    string ss2 = "ritiktiteitiik";
    cout<<ss2.find("itiik")<<endl;
    
    //8.Insert Function
    ss2.insert(2,"lol");
    cout<<ss2<<endl;

    //9.Length of a string
    cout<<ss2.size()<<endl;
    cout<<ss2.size()<<endl;

    for(int i = 0;i<ss2.size(); i++){
        cout<<ss2[i]<<endl;
    }
    
    //10.substring of a string
    string s = ss2.substr(6,4);
    cout<<s<<endl;

    //11.Numeric string to integer.
    string ss3 = "786";
    int x = stoi(ss3);
    cout<<x+2<<endl;
    
    //12.Integer to String.
    int y = 786;
    cout<<to_string(y) +"2"; //it does not add it just append.

    //13.Sorting a String.
    string s11 = "adjaxjfoidnddifn";
    sort(s11.begin(),s11.end());
    cout<<s11<<endl;

    return 0;

}