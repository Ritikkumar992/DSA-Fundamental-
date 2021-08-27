#include<iostream>
using namespace std;

int  sum (int a, int b){
    cout<<"Using function with 2 arguments "<<endl;
     return a+b;
}
int  sum (int a, int b, int c ){
    cout<<"Using function with 3 arguments "<<endl;
     return a+b+c;
}
//Calculate the volume of cylindera:: uding function over loading....
int volume (double r, int h){
    return (3.13 *r *r *h);
}

//Calculate the volume  of cube....
int volume(int a){
return (a*a*a);
}
//Calculate the volume of rectangle...
int volume (int l, int b, int h){
return (l*b*h);
}
int area(int r,int h){
    return 3.14*r*r*h;
}
int area(int c,int l,int h){
    return 3.14*c*l;
}

int main(){
    
     cout <<"The sum of 3 and 6 is " <<sum(3,6)<<endl;
     cout<<"The sum of 3, 7 and 8 "<<sum(3,7,8);
     cout<<"The volume of cuboid of 3, 7 and 8 is  "<<volume(3,7,8)<<endl;
     cout<<"The volume of cylinder of radius 3 and height 7 is  "<<volume(3,7)<<endl;
     cout<<"The volume of cube  of side 3 is "<<volume(3)<<endl; 
     cout<<"The area of cylinder is "<<area(7,2)<<endl;
     cout<<"The area of cone is "<<area(7,2)<<endl;
    
    return 0;
}