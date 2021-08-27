//Return the index where our key is present in Array [Using linaer Searching].
//Time complexity is : O(n).
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
signed main()
{
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << linearSearch(arr, n, key);

    return 0;
}
//Return the index where our key is present in Array [Using Binary Searching].
//Elements must be in sorted order.[Arrray must be sorted.]
//Time complexity is O(log2^n).
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while(s<=e)
    {
        int mid =(s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        //Else If x is greater than the mid element, 
        //then x can only lie in the right half subarray after the mid element.
        //So we recur for the right half.
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    return -1;

}

signed main(){
    int n; cin>>n;
    int key; cin>>key;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<BinarySearch(arr,n,key);
    return 0;
}