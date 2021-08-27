#include <iostream>
using namespace std;

int main()
{
   for(int i = 0;i<5;i++){
       cout<<i<<endl;
       if(i==2){
           break;
       }
   }

    for (int i = 0; i < 4; i++)
    {
        if (i==2)
        {
           continue;
        }
        cout<<i<<endl;
        
    }
    for(int i = 1; i<=10; i++){
        cout<<i*i<<endl;
        if (i==5)
        {
            break;
        }
        
    }
    for(int i = 1; i<=10; i++){
       
        if (i==5)
        {
            continue;
        }
         cout<<i*i<<endl;
        
    }
    return 0;
}

