#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i <= 40; i++)
    {
      cout<<i<<endl;
    }
    int i =1;
    while (i<= 40)
    {
      cout<<i<<endl;
      i++;
    }
  /***********Printing a table of 6************/
  int i = 1;
  do
  {

    cout << i * 6 << endl;
    i++;
  } while (i <= 10);
  /***********Printing the square of 1 to 10 **********/
   for (int i = 1; i <= 10; i++)
  {
    cout<<i*i<<endl;
  }
  /***************Printing the cube of 1 to 10*************/
  int i = 1;
    while (i<=10)
  {
    cout<<i*i*i<<endl;
    i++;
  }
  //********Printing the table  of 15 number.
 int i = 1;
  do
  {
    cout<<i*15<<endl;
    i++;
  } while (i<= 10);
  
 ///Printing the sum of 10 finite number. 
  for (int  i = 1; i <=10 ; i++)
  {
    cout<<i+(i+1)<<endl;
  }

  return 0;
}