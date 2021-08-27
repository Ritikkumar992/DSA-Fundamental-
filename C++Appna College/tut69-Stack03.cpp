//Reversing a stack.
#include<bits/stdc++.h>
using namespace std;

void insertATBottom(stack<int> &st, int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele = st.top();//store top element in a vaiable topele.
    st.pop();
    insertATBottom(st, ele);

    st.push(topele);
}

void reverse(stack<int> &st){  //call by reference.
    
    if(st.empty()){
        return;
    }

    int ele = st.top();//store top element in a vaiable ele.
    st.pop();  // 
    reverse(st);
    insertATBottom(st,ele);
}
int32_t main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}