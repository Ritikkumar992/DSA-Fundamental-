/*//1.Max till i(Given an array a[] of size n.For every i from to 0 to n-1 output max).
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    int mx = -199999999;

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }   

    for(int i = 0;i<n;i++)
    {
        mx = max(mx ,arr[i]);// updating max.
        cout<<mx<<endl;
    }
    
    return 0;
}
//2.Sum of all SubArray.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // key step.
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        count = 0;//---> if we does't intialize with 0 it counts all previous element.
        for(int j = i;j<n;j++){
            count += arr[j];
            cout<<count<<" ";
        }
    }
    
    return 0;
}

//3.Longest Arithmatic SubArray[Kickstart].
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int pd = arr[1] - arr[0];
    int curr = 2;
    int ans = 2;
    int j = 2;
    while(j<n)
    {
        if(pd == arr[j] - arr[j-1])
        {
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
*/
//4.Record Breaker Day.
//overeall time complexity is O(n).
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];//bcz we need to compare with i+1th element .
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //key step.
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    //main logic.
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
    
    return 0;
}