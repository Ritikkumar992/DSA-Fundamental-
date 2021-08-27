//1.Tiling Problem
#include<bits/stdc++.h>
using namespace std;
int tillingWays(int n){
    if(n==0 || n==1){
        return n;
    }
    return tillingWays(n-1)+tillingWays(n-2);
}
int main(){
    cout<<tillingWays(4);
    return 0;
}
//2.Friends pairing prooblem:
//{Find the number of ways in which a friend can remain single or can be paired up}
#include<bits/stdc++.h>
using namespace std;
int friendPairing (int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return friendPairing(n-1)+ friendPairing(n-2)*(n-1);
}
int main(){
     cout<<friendPairing(4);
    return 0;
}
//3.0-1 Knapsack Problem:
//Put n items with given weight and value in a knapsack of capacity W 
//to get the maximum total value in the knapsack.
#include<bits./stdc++.h>
using namespace std;
int knapsack(int value[],int wt[],int n, int W){
    if(n==0 || W == 0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}
int main(){
    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    int W = 50;
    cout<<knapsack(value,wt,3,W)<<endl;
    return 0;
}
