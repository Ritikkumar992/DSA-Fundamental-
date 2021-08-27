#include<bits./stdc++.h>
using namespace std;

int main(){
//For loop 
   for(int i = 1;i<=40;i++){
      cout<<i<<" ";
      
   }
   
   //While loop
   int i = 1;
   while(i<=40){
      cout<<i<<" ";
      i++;
   }
   //Do While loop
  // int i = 0;
   do{
      cout<<i<<" ";
      i++;
   }while(i<=49);

  //Printing the square of 10 number;
  for(int i= 0;i<=10;i++){
     cout<<i*i<<endl;
  }

  for(int i =0;i<=11;i++){
      cout<<i+(i+1)<<" ";
}
   return 0;
}

//To print sum of n natural number.
#include<bits./stdc++.h>
using namespace std;

int sum(int n){
   return n*(n+1)/2;
}

int main(){
   int n;
   cin>>n;
   cout<<sum(n);
   return 0;
}