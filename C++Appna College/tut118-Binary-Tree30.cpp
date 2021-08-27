//Painters Partition Problem.
#include<iostream>
#include<climits>
using namespace std;

int  findfeasible(int boards[], int n, int limit){
    int  total= 0 , painters  = 1;

    for(int i = 0;i<n;i++){
        total += boards[i];
        if(total>limit){
            total = boards[i];
            painters++;
        }
    }
    return painters;
}

int paintersPartition(int boards[],int n, int m){
    int sum = 0 , k = 0;
    for(int i =0;i<n;i++){
        k = max(k,boards[i]);
        sum = sum+boards[i];
    }

    int start = k, end = sum;
    while(start < end){
        int mid =(start+end)/2;
        int painters = findfeasible(boards,n,mid);
        if(painters <= m){
            mid = end;
        }
        else{
            start = mid+1;
        }
    }
    return start;
}

int main(){
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;

    cout<<"The minimum time to paint board : "<<paintersPartition(arr,n,m)<<endl;    
    return 0;
}