#include<bits/stdc++.h>
using namespace std;

class students{
    string name;
    public:
    //string name;
    int age;
    bool gender;

    //default constructor 
    students(){
        cout<<"Default constructor"<<endl;
    }
    //parametrised constructor
    students(string s, int a, int g){
        cout<<"parametrised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    //Copy constructor
    students(students &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    //Destructor
    ~students(){
        cout<<"Destructor is called!!"<<endl;
    }

    void setName(string s){
        name = s;
    }
    void getName(){
         cout<<name<<endl;
    }

    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    bool operator == (students &a){
        if(name==a.name && age == a.age && gender == a.gender){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    students a;
    a.name = 'ritik';
    a.age = 18;
    a.gender = 0;

    string s;
    cin>>s;
    students arr[3];
    for(int i = 0;i<3;i++){
        //cin>>arr[i].name;
        arr[i].setName(s);
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
    
    for(int i = 0;i<3;i++){
        arr[i].print();
    }
 
   students a("ritik",20,1);
    a.print();

    students b("rohatn ",12,0);
     b.print();
    students c = a;

    students a("ritik",19,1);
    students b;
    students c = a;
    

    //Operator overloading

    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    return 0;
}