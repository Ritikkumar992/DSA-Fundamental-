//Bubble Sort.[Repeatedly swap two adjacent element if they are in wrong order.]
#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n; cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    //key step.
    int counter = 0;
    while(counter<n){
        for(int i = 0;i<n-counter;i++){
            if(arr[i] > arr[i+1]){ //wrong order sequence of element.
            //swap
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp; 
           }
        }
        counter++;
    }
    // output step.
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}