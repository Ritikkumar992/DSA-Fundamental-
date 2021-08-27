#include <iostream>
using namespace std;

class MutualFund
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    MutualFund() {}
    MutualFund(int p, int y, float r);
    MutualFund(int p, int y, int r);
    void show();
};
MutualFund::MutualFund(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
MutualFund::MutualFund(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void MutualFund::show()
{
    
  cout<<"Principal amount was"<<principal<< "Return value after "<<years<<"years is"<<returnValue<<endl;
      
 
}

int main()
{
    MutualFund mf1,mf2 ,mf3;
    int p;
    int y;
    float r;
    int R;
   // mf3.show();
    cout<<"Enter the value of p, y ,r "<<endl;
    cin>>p>>y>>r;
    mf1 = MutualFund(p,y,r);
    mf1.show();

    cout<<"Enter the value of p, y ,R "<<endl;
    cin>>p>>y>>R;
    mf2 = MutualFund(p,y,R);
    mf2.show();

    return 0;
}