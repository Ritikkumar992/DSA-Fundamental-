#include<bits./stdc++.h>
using namespace std;

int main(){
    string s1  = " Ritik kumar is a peacful soul . ";
    string s2;
    //Write Opeartor 
    ofstream out("sample60a.txt");
    out<<s1;
    //Read Operator
    ifstream in("sample60b.txt");
    getline(in, s2);
    cout<<s2;
    return 0;
}

#include<bits./stdc++.h>
using namespace std;

int main(){
    ofstream hout("sample60a.txt");
    string name;
    cout<<"Enter your name "<<endl;
    cin>>name;

    hout<<name+ " is my name ";
    hout.close();

    ifstream hin ("sample60a.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is "<<content<<endl;

    hin.close();
    return 0;
}

#include<bits./stdc++.h>
using namespace std;

int main(){
    ofstream out("sample60a.txt");
    out<<"This is me "<<endl;
    out<<"This is me also "<<endl;
    out<<"This is also me "<<endl;
    out.close();

    ifstream in;
    string s;
    in.close("sample60a.txt");

    while(in.eof()==0){
        getline(in,s);
        cout<<s<<endl;
    }
    in.close();
    return 0;
}