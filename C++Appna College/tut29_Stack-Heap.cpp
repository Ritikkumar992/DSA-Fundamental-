/**********STACK**************/
#include<bits/stdc++.h>
using namespace std;

int add(int num1,int num2){
    return num1+num2;
}

int main(){
    int  a = 2;
    int b = 3;

    int sum = add(a,b);
    cout<<sum<<endl;
    return 0;
}
/********Heap************/
#include<bits./stdc++.h>
using namespace std;

int main(){
    int a = 10;   //stored in stack
    int *p = new int (); // allocate memory in heap

    *p = 10;
    delete(p);  //deallocate memory

    p = new int [4];

    delete[]p;
    p = NULL;
    return 0;
}
/*
 /**********Key Differences Between Stack and Heap***************
1.In a stack, the allocation and deallocation is done by CPU and is automatic whereas, 
  in heap, it needs to be done by the programmer manually.
2.Heap frame handling is costlier than stack frame handling.
3.Implementation of a stack is complex. 
  As against, implementation of a heap is simple.
4.A function call in stack takes O(N) time. 
  In contrast, it takes O(1) time in a heap.
5.Stack implementation mainly suffers from the memory shortage problem. 
  On the contrary, the main issue in a heap is fragmentation.
6.Access to a stack frame is easier than the heap as the stack is confined to the small region of memory and it always hit the cache,
  but heap frames are dispersed throughout the memory so the memory accessing can cause more cache misses.
7.Stack is not flexible, the memory size allotted cannot be changed. 
 On the other hand, a heap is flexible, and the allotted memory can be altered.
8.A heap takes more accessing time than a stack.
*/