//Binary Search Tree---> Search and Delete.
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
//Search in BST. 
Node* searchInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    //data > key
    if(root->data > key){
        return searchInBST(root->left, key);
    }
    // data < key
    return searchInBST(root->right, key);
}
Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}
// Delete in BST.
Node* deleteInBST(Node* root, int key){
    //case1:   
    if(key < root->data){
       root->left = deleteInBST(root->left,key);
   } 
   else if(key > root->data){
       root->right = deleteInBST(root->right,key);
   }
   //case2:
   else{
       if(root->left == NULL){
           Node* temp = root->right;
           free(root);
           return temp;
       }
       else if(root->right == NULL){
           Node* temp = root->left;
           free(root);
           return temp;
       }
       //case3:
       Node* temp = inorderSucc(root->right);
       root -> data = temp-> data;
       root->right = deleteInBST(root->right,temp->data);
   }
    return root;
}
void inorder(Node* root){
    if(root== NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
/*    4
     /  \
    2    5
   / \    \
  1   3    6
*/
    Node* root = new Node(4);
    root->left = new Node(2);   
    root->right = new Node(5);
    root ->left->left = new Node(1);   
    root ->left->right = new Node(3);
    root ->right->right = new Node(6);

    if(searchInBST(root, 5) == NULL){
        cout<<"Key does not found "<<"\n";
    }
    else{
        cout<<"Key exits "<<endl;
    }

    inorder(root);
    cout<<"\n";
    root = deleteInBST(root, 2);
    inorder(root);
    cout<<"\n";
    return 0;
}