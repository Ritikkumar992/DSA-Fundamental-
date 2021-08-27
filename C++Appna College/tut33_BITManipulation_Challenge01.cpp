//1.Write a program to check if a given number is power of 2
#include<iostream>
using namespace std;
bool isPowerOf2(int n){
    return  (n && !(n & n-1));


}
int main(){
    cout<<isPowerOf2(11);
    return 0;
}
//2.Write a program to  count the number of ones in a binary representation of a number.
#include<iostream>
using namespace std;

int numberofOnes(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count++;
}

int main(){
    cout<<numberofOnes(19);
    return 0;
}
//4.Write a program to generate all possible subsets of a set {a,b,c}.
#include<iostream>
using namespace std;
void subsets(int arr[],int n){
    for(int i = 0;i<(1<<n);i++){
        for(int j = 0;j<n;j++){
            if( i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
        int arr[4] = {1,2,3,4};
        subsets(arr,4);
    return 0;
}