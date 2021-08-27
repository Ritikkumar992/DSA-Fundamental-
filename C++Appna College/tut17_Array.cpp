#include<bits/stdc++.h>
using namespace std;

int main(){

    //Array Initailization
    int arr[4] = {1,2,3,4};
    cout<<arr[3]<<endl;

    //Taking input
    int n;
    cin>>n;
    int a[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    for(auto i:n){
        cin>>arr[i];
    }
    //Taking output
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
//Qns-->Print Maximum and minimum element from the array.
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n; cin>>n;
    ll arr[n]; 
    for(ll i = 0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(ll i = 0;i<n;i++){
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }
        if(arr[i]<minNo){
            minNo = arr[i];
        }
    }
    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
}