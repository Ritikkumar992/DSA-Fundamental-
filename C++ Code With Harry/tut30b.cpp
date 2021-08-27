/*Qn::Create a function which takes 2 point 
       object and computes the distance between those 2 points*/
       
#include<bits./stdc++.h>
using namespace std;
float Distance(int x1, int x2, int y1, int y2){
    return sqrt(pow(x2-x1,2))+(pow(y2-y1,2));
}
int main(){
    int x1, x2, y1, y2;
    cout<<"Enter the value of x1, x2, y1 and y2 "<<endl;
    cin>>x1>>x2>>y1>>y2;
    cout<<"Our required distance is "<<Distance(x1, x2, y1, y2)<<endl;
    return 0;
}