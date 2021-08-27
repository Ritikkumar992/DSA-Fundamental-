//Redundant Parenthesis--->Extra Brackets.
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string s;
    cin>>s;
    
    stack<char> st;
    bool ans = false;

    for(int i = 0;i<s.size();i++){
        if(s[i] == '+' || s[i]== '-' || s[i]=='*'|| s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){

            if(st.top()=='('){
                ans = true;
            }

            while(st.top() == '+' || st.top() == '-' || s[i] =='*' || s[i]=='/'){
                st.pop();
            }
            st.pop();

        }
    }
    cout<<ans<<endl;

    return 0;
}