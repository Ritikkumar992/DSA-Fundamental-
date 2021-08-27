#include<bits./stdc++.h>
using namespace std;
class Shop{
    int item;
    int price;
    public:
     void setData(int a, int b){
         item = a;
         price = b;
     }
     void printData(){
         cout<<"The value of item is "<<item<<endl;
         cout<<"The value of price is "<<price<<endl;
     }
};
int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    int p,i,q;
    for(int i = 0;i<size;i++){
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
    }
     for (int i = 0; i <size; i++){
            cout<<" Item number :"<<i+1<<endl;
            ptrtemp->setData();
            ptrtemp++;
         }
    
    return 0;
}