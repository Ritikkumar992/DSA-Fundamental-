//Count and sum of Nodes-->
//1.Count all the nodes of a Binay Tree.
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
int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;

}
int32_t main(){
      Node* root = new Node(1);
      root->left = new Node(2);   
      root->right = new Node(3);
      root ->left->left = new Node(4);   
      root ->left->right = new Node(5);
      root ->right->left = new Node(7);   
      cout<<countNodes(root); 
    return 0;
}

//2. Sum of all nodes in a Binary Tree.
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
int SumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return SumNodes(root->left) + SumNodes(root->right) + root->data;

}
int32_t main(){
      Node* root = new Node(1);
      root->left = new Node(2);   
      root->right = new Node(3);
      root ->left->left = new Node(4);   
      root ->left->right = new Node(5);
      root ->right->left = new Node(6);   
      root ->right->right = new Node(7);  

      cout<<SumNodes(root); 
    return 0;
}
