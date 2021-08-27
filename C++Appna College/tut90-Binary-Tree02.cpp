//Binary Tree Traversal.
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
//1.Preorder Traversal--->ROOT->Left->Right.
   void preorder(struct Node* root){
       if(root==NULL){
           return;
       }
       cout<<root->data<<" ";
       preorder(root->left);
       preorder(root->right);

   }
//2.Inorder Traversal--->Left->ROOT->Right.
    void Inorder(struct Node* root){
       if(root==NULL){
           return;
       }
       Inorder(root->left);
       cout<<root->data<<" ";
       Inorder(root->right);

   }
//3.Postorder Traversal--->Left->Right->ROOT.   
    void Postorder(struct Node* root){
       if(root==NULL){
           return;
       }
       Postorder(root->left);
       Postorder(root->right);
       cout<<root->data<<" ";

   }


  /*  1
     /  \
    2    3
   / \  / \
  4   5 6  7
  
  
  */


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorder(root);
    cout<<endl;
    Inorder(root);
    cout<<"\n";
    Postorder(root);
    return 0;
}