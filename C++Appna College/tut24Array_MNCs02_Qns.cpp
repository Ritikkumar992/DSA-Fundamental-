//1.Printing all subarray
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // key step.--->Time compelexity is O(n^3).
    for(int i =0;i<n;i++)
    {
        for(int j =i;j<=n;j++)
        {
            for(int k = i;k<=j;k++)
            {
                cout<<arr[k]<<" "<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
//2.Maximum Subarray Sum Problem
#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++){
       cin>>arr[i];
    }
    //key step --->time compelxity is O(n^3).
    int maxSum = INT_MIN;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int sum = 0;
            for(int k =i;k<=j;k++){
                sum+=arr[k];
            }
            maxSum = max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}
//2.1.Cumulative sum Approach to solve Maximum sum Array Problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++){
       cin>>arr[i];
    }
    //key step.
    int currSum[n+1];
    currSum[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        currSum[i]=currSum[i-1] + arr[i-1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j <i; j++)
        {
           sum = currSum[i] - currSum[j];
           maxSum = max(sum,maxSum);
        }   
    }
    cout<<maxSum<<endl;
    return 0;
}
//2.2.Kadane's algotithm to solve Maximum sum Array Problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0;i<n;i++){
        currentSum += arr[i];
            if(currentSum<0){
                currentSum = 0;
            }
            maxSum = max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
    return 0;
}
//2.3.Maximum Circular Subarry Sum to solve Maximum sum Array Problem
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){

int currentSum = 0;
int maxSum = INT_MIN;
for (int i = 0; i < n; i++)
{
    currentSum+= arr[i];
    if (currentSum<0)
    {
        currentSum = 0;
    }
    maxSum = max(maxSum,currentSum);

}
return maxSum;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }

    int wrapSum;
    int nonwrapSum;

    nonwrapSum = kadane(arr,n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapSum = totalSum+kadane(arr,n);

    cout<<max(wrapSum,nonwrapSum)<<endl;
    
    return 0;
}
//3.Pair Sum Problem
#include<iostream>
#include<climits>
using namespace std;
bool pairsum(int arr[],int n , int k){
    int low = 0;
    int high = n-1;

    while (low<high)
    {
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else
        {
            low++;
        }
         }
         return false;
    
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k = 31;
    cout<<pairsum(arr,8,k)<<endl;
    return 0;
}