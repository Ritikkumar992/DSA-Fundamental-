#include <iostream>
using namespace std;

  inline int product(int a, int b)
{
  //Don't recommended to use below lines with inline functinon.
  // static int c=0;//This execute only once
  //c=c+1;//next time this funtion is run , the value of c will be retained.
  return a * b;
}

int moneyInvested (int moneyRecived, float factor = 1.04)
{ //Here 1.04 int moneyReceived(int currentMons a default arugment  value until and unlesss not mention.
  return moneyRecived * factor;
  //cumplsory arguments --->left, default arguments --->extreme right side.
}
//Constant arguments
/*
int strlen(const char *p){
}*/
int main()
{
  int a, b;
  cout<<"Enter the value of a and b "<<endl;
  cin>>a>>b;
  cout<<"The product of a and b is"<<product (a,b)<<endl;
  cout<<"The product of a and b is"<<product (a,b)<<endl;
  cout<<"The product of a and b is"<<product (a,b)<<endl;
  cout<<"The product of a and b is"<<product (a,b)<<endl;
  int money = 1000000;
  cout << "If u have " << money << "Rs in your bank account , you will receive " << moneyRecived(money) << "Rs after  1 year " << endl;
  cout << " For vip::If u have " << money << "Rs in your bank account , you will receive "<< moneyRecived(money, 1.1) << "Rs after  1 year ";


  return 0;
}