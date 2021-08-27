#include <iostream>
using namespace std;
/*int sum(int a, int b){
     int c = a + b;
    return c;*/
//int sum(int , int );
int sum(int a, int b);//--->Funtion prototyping 
void g(void);

int main()
{
     int num1, num2;
    cout << "Enter the value of num1 " << endl;
    cin >> num1;
    cout << "Enter the value of num2 " << endl;
    cin >> num2;
    cout << "The sum is " <<sum(num1 , num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
     int c = a + b;
    return c;
}
void g(){
    cout<<"\nHellow Ritik";
}