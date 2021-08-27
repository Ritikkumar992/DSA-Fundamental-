//Longest substring without repeating character.
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string s; cin>>s;
    vector<int> dict(256,-1);
    int maxlne = 0, start = -1;
    for(int i = 0;i<s.size();i++){
        if(dict[s[i]]>start)
           start = dict[s[i]];
        dict[s[i]] = 1;
        maxlne = max(maxlne,i-start);
    }
    cout<<maxlne;
    return 0;
}