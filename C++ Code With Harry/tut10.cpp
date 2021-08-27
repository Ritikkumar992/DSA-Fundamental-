#include<iostream>
using namespace std;

int main(){
    /*loops in c++:( loops are the block of statement used for repetition)
    There are three types of loops in c++:
    1.For loop.
    2.While loop.
    3.do-while loop.
    */

   /*For loop in c++*/
   
  /* int i=1;
   cout<<i;
   i++;
   cout<<i;
   i++;
   cout<<i;
   i++;
   cout<<i;
   i++;*/
   //Syntax for for loop.
   /*for(initiatization;condition; updation;){
       loop body(c++ code);
   }*/
   for (int i = 1; i <= 40; i++)
   {
       /* code */
       cout<<i<<endl;
       
   }
        //Example of infinete  for loop
        // for (int i = 1; 34 <= 40; i++)
        // {
       /* code */
       // cout<<i<<endl;
       
      //  }
      /*While loop in c++*/
      //Synatax :
      //while(condition);{
      //    c++ statements;
      //    i++
      //}
      //printing 1to40 using while loop.
      int i=1;
      while(i<=40);{
          cout<<i<<endl;
          i++;
      }
      } 
      //Example of infinte while loop
      int i=1;
      while(true){
          cout<<i<<endl;
          i++;
      }
      /*******do-while loop in c++.*********
      synatx:
      do
      {
          c++ statement;
      } while(condition)*/

      //printing 1to 40 using do while loop.
      int i=1;
      do {
          cout<<i<<endl;
          i++;
      }while(i<=40);

      //Print a table of 6;
      int i=1;
      do{
          cout<<i*6<<endl;
        i++;
      }while(i<=10);
        return 0;
      }






   