//Build BST from Preorder.
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

Node* constructBST(int preorder[],int* preorderIDX, int key, int max,int min, int n){
    if(*preorderIDX >= n){
        return NULL;
    }
    Node* root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preorderIDX = *preorderIDX + 1;

        if(*preorderIDX < n){
            root->left = constructBST(preorder, preorderIDX, preorder[*preorderIDX],min,key,n);
    
        }
        if(*preorderIDX < n){
            root->right = constructBST(preorder, preorderIDX, preorder[*preorderIDX],key,max,n);
        }
    }
    return root;
}
void printPreorder(Node* root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    /* 10
      /  \
     2    13
    /     /
   1     11
    */
    int preorder[] = {10,2,1,13,11};
    int n = 5;
    int preorderIDX= 0;
    Node* root = constructBST(preorder, &preorderIDX, preorder[0],INT_MIN,INT_MAX ,n);
    printPreorder(root);
    return 0;
}