//1.First Reapeating Element {Amazon & Oracle}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    //key step.
    //1.Intilizing idx array with -1.

    const int N = 1e4 + 2;
    int idx[N];
    for(int i = 0;i<N;i++){
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    
    for(int i = 0;i<n;i++)
    {
        if(idx[a[i]] != -1)
        {
            minidx = min(minidx , idx[a[i]]);
        }
        else{
            idx[a[i]] = 1;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << " -1 " << endl;
    }
    else
    {
        cout << minidx + 1<<endl;
    }
    return 0;
}

//2.Subarray With Given Sum{Google,amazon,visa,facebook}
#include<iostream>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    //key step.
    int i = 0, j = 0, st = -1, end = -1, currsum = 0;
    while(j<n && currsum + a[j] <= s)
    {
        currsum += a[j];
        j++;
    }
    if(currsum == s)
    {
        cout<<i+1<<" "<<j<<endl;
    }
    while(j<n)
    {
        currsum += a[j];
        while(currsum >s)
        {
            currsum -= a[i];
            i++;

        }
        if (currsum==s)
        {
            st = i+1;
            end = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<end<<endl;
    
    return 0;
}

//3.Smallest Positive Missing Number(Amazon, Samsung,Shapdeal)
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //key step.
    //Intilizing boolean array.

    const int N = 1e4 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

//  Iterate over array and mark the non-negative a[i] as true.
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }
// Iterate over the check[] to find the index of 1st position matrix.
    int ans= -1;
    for (int i = 1; i <N; i++)
    {
        if(check[i]==false){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}