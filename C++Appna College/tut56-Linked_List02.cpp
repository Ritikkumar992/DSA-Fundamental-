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
/**********Inseretion at Head********/
void insertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next = head;
    head = n;
}
/********Insetion at Tail**********/
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
/*********Searching in linked List*********/
bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
/*******Deletion of the first node of a linked list***********/
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;

    delete todelete; // this is done to prevent memory leake.
}

/********Deletion in Linked list************/
void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp= temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
int main(){
    node* head  = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    //display(head);

    insertAtTail(head, 4);
    display(head);

    //cout<<search(head,3)<<endl;
    
    deletion(head, 3);
    display(head);

    deleteAtHead(head);
    display(head);

    return 0;
}
