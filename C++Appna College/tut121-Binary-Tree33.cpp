//Merge K-Sorted Array.
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i =a;i<b;i++)
#define vii vector<pii>
#define vi vector<pii>
#define pii pair<int,int>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

int main(){
    int k;
    cin>>k;

    vector<vector<int> > a(k); // 2D vector.
    
    rep(i,0,k)
    {
        int size;
        cin>>size;

        a[i] = vector<int>(size);
        rep(j,0,size)
        {
            cin>>a[i][j];
        }
    }
    vector<int> idx(k,0);

    priority_queue<pii,vector<int>, greater<int> > pq;

    rep(i,0,k)
    {
        pii p;
        p.ff = a[i][0];
        p.ss = i;
        pq.push();
    }
    vi ans;
    while(!pq.empty())
    {
        pii x = pq.top();
        pq.pop();

        if(idx[x.ss]+1 <a[x.ss].size())
            pq.push({a[x.ss][idx[x.ss]+1],x.ss});

        idx[x.ss] += 1;
    }
    rep(i,0,ans.size())
    {
        cout<<ans[i]<<endl;
    }
    cout<<endl;
    return 0;
}