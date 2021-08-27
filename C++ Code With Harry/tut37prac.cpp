#include <iostream>
using namespace std;

class School
{
public:
    int id;
    float marks;
    School(int inpId)
    {
        id = inpId;
        marks = 98.04;
    }
    School() {} //Default constructor
};
class Student : public School
{
public:
    int rank;
    Student(int inpId)
    {
        id = inpId;
        rank = 18;
    }
        
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    School ritik(1);
    cout << ritik.marks << endl;
    
    Student s1(3);
    cout << s1.rank << endl;
    cout << s1.id << endl;
    //s1.getData();

    return 0;
}

#include<bits./stdc++.h>
using namespace std;

class Employee{
    public:
    int id;
    int salary;
    Employee(int inpid){
        id = inpid;
        salary = 1222;
    }
    Employee(){}
    
};
class Assistant : public Employee{
    public:
    int AssistantCode;
    Assistant(int inid){
        id = inid;
        AssistantCode = 11;
    }
    void getData(){
        cout<<"Your Id is "<<id<<endl;
    }
};


int main(){
    Employee Ritik(101);
    cout<<Ritik.salary<<endl;
    cout<<Ritik.id<<endl;
    cout<<" ---------------"<<endl;
    Assistant Rohit(10010);
    cout<<Rohit.id<<endl;
    cout<<Rohit.AssistantCode<<endl;
    Rohit.getData();
    
    return 0;
}