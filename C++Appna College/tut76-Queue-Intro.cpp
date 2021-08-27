//Array Implementation of Queue.
#include<bits/stdc++.h>
using namespace std;
#define n 20

class Queue{
    int *arr;
    int front;
    int back;

    public:
    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    //Enqueue operation
    void push(int x){
        if(back == n-1){
            cout<<"Queue overflow "<<endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    //Dequeue Opearation
    void pop(){
        if(front == -1 || front > back){
            cout<<"NO element in queue "<<endl;
            return;
        }
        front++;
    }
    //Peek operation
    int peek(){
        if(front == -1 || front > back){
          cout<<"NO element in queue "<<endl;
            return -1;
        }
        return arr[front];
    }

    //Empty operation
    bool empty(){
        if(front == -1 || front > back){
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

    cout<<q.empty();

    return 0;
}