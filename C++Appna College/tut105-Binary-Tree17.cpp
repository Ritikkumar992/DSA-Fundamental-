//Binary Search Tree [BST] introduction and Build.
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
//Insertion in BST[Building a BST].
Node* insertBST(Node* root, int val){
    if(root== NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = insertBST(root->left,val);
    }
    else{
        //val > root->data
        root->right = insertBST(root->right, val);
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
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    // print inorder-->Inoder of BST is always sorted.
    inorder(root);
    cout<<endl;

    return 0;
}