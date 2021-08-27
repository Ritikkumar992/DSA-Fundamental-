
#include <iostream>
using namespace std;

int main()
{
    //Example of array
    int marks[] = {99, 43, 89, 64};
    cout << "These are marks " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    marks[3] = 84;//We can also change the value of an array    
    cout << marks[3] << endl;
    
    for (int  i = 0; i < 4; i++)
    {
        cout<<"The value of marks is "<<i<<" is "<<marks[i]<<endl;
    }
     int i=1;
      while(i<=4);{
          cout<<"The value of marks "<<i<<" is " <<marks[i]<<endl;
          i++;
        
      } 
      do
      {
          cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
          
      } while (i<=4);
      //pointer and array
      int *p = marks;
      cout<<*(p+1)<<endl;
      cout<<(*++p)<<endl;
      cout<<"The value *p is "<<*p<<endl;
      cout<<"The value *(p+1) is "<<*(p+1)<<endl;
      cout<<"The value *(p+2) is "<<*(p+2)<<endl;
      cout<<"The value *(p+3) is "<<*(p+3)<<endl;    
     return 0;
}