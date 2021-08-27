#include<iostream>
using namespace std;

int main(){
    //Array examples.
    int marks[4] ={23,55,88,69};
    int mathsmarks[4];
    mathsmarks [0] =14;
    mathsmarks [1] =148;
    mathsmarks [2] =194;
    mathsmarks [3] =714;
    cout<<"These are maths marks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
     //you can also change the value of an array
    cout<<"These are  marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2] =99;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for (int i = 0; i <4; i++)
    {
        
        cout<<"The value of marks "<<i<<" is " <<marks[i]<<endl;
        }
        
        //Quick Quiz:: do same using while and do while loop.
        int i=1;
      while(i<=4);{
          cout<<"The value of marks "<<i<<" is " <<marks[i]<<endl;
          i++;
        
      } 
         //::doing the same using do while loop.
         do
         {
             
             cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
         } while (i<=4);  

           //Pointers and array 
           int*p = marks;
           cout<<*(p++);
           cout<<(*++p);
           cout<<"The value of *p is "<<*p<<endl;   
           cout<<"The value of *(p+1) is "<<*(p+1)<<endl;   
           cout<<"The value of *(p+2) is "<<*(p+2)<<endl;   
           cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}