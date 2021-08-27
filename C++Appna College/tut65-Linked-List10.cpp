//Put even elements after odd elements in linked list.
//Time complexity is O(N).
#include <bits./stdc++.h>
using namespace std;
class node
{
public:                                     
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
//Insertion at start  in Linked List 
void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
//Insertion at end   in Linked List 
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void dispaly(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void evenAfterOdd(node* &head){
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next; 
        odd = odd->next;
        even->next=odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if(odd->next!=NULL){
        even->next = NULL;
    }
} 

int main()
{
    node *head = NULL;
    int arr[]={1,2,3,4,5,6};
    
    for(int i = 0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    dispaly(head);
    evenAfterOdd(head);
    dispaly(head); 
   
    
    return 0;
} 