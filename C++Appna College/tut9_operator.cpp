#include<bits./stdc++.h>
using namespace std;

int main(){
    int i = 1;
        //1   //3
    i = i++ + ++i;
    cout<<i<<endl;
   
    int i = 1;
    int j = 2;
    int k;
      //1  2   1     2      3     4
    k = i +j +i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<" "<<k<<endl;

    int i = 1;
    //  1->2 - 2->1 + 1->2 - 2
    i = i++ - --i + ++i - i--;
    cout<<i;

    int i = 1, j = 2, k = 3;
    //      1->0-2->1-3->2
    int m = i-- - j-- - k--;
    cout<<i<<" "<<j<<" "<<k<<" "<<m<<" ";

    int i = 10, j = 20 , k ;
    //  10->9 9->10  19    20    9    20->19  10  19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  //conditional operator.
  int a = 1, b = 5;
  int c = a>b ? a-b : b-a;
  cout<<c;
  return 0;
}