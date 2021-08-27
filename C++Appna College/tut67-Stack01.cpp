//Implementation of stack using Array.
#include<bits/stdc++.h>
using namespace std;
#define n 100

class Stack{

    int* arr; // dynamically.
    int top;

    public:
    Stack(){ //constructor is called.
        arr = new int[n];
        top = -1;
    }
    //Push Function
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow "<<endl;
            return;
        }
        top++;
        arr[top] = x;   
    }
    //Pop Function
    void pop(){
        if(top == -1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    // Top pointer 
    int Top(){
        if(top==-1){
            cout<<"No element in stack "<<endl;
            return -1;
        }
        return arr[top];
    }
    // Empty function
    bool empty(){
        return top ==-1;
    }

};

int32_t main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}