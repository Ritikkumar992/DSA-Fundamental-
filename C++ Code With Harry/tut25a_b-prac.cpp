#include<bits./stdc++.h>
using namespace std;
class Student{
    int id;
    int fees;
    public:
    void setId(){
        fees = 10000;
        cout<<"The id of the  Student  is "<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"THe id of the Student  is "<<id<<endl;
    }
};
int main(){
    Student BBIT[5];
    for(int i = 1;i<=5;i++){
        BBIT[i].setId();
        BBIT[i].getId();
    }
    return 0;
}