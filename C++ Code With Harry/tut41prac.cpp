#include<bits./stdc++.h>
using namespace std;
class Employee{
    protected:
     int data1;
     public:
      void setData1(int eId){
          data1= eId;
      }
};
class Assistant{
    protected:
    int data2;
    public:
    void setData2(int aId){
        data2= aId;
    }
};
class Manager:public Employee ,public Assistant{
    public:
    void show(){
        cout<<"Your Employee id  is "<<data1<<endl;
        cout<<"Your Assistant  is "<<data2<<endl;
        cout<<"Your Manager id  is "<<data1+data2<<endl;
    }
};
int main(){
    Manager Ritik;
    Ritik.setData1(12);
    Ritik.setData2(13);
    Ritik.show();
    
    return 0;
}