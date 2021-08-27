//Linked list Implemenatation of Queue.
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){

        data = val;
        next = NULL;

    }
};

class Queue{

    node* front;
    node* back;

    public:
    Queue(){
        front = NULL;
        back = NULL;
    }
    //Enqueue opearation
    void push(int x){
        
        node* n = new node(x);

        if(front == NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back =  n;
    }
    //Dequeue opearation
    void pop(){
        if(front == NULL){
            cout<<"Queue Underflow "<<endl;
            return;
        }
        node* todelete = front;
        front = front ->next;

        delete todelete;
    }
    //Peek opearation
    int peek(){
        if(front == NULL){
            cout<<"No element in Queue "<<endl;
            return -1;
        }

        return front->data;
    }
    //Empty opearation
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int32_t main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

    return 0; 
}