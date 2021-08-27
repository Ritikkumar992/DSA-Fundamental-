//Height and Diameter of a Binary Tree.
//1.Height of a Binary Tree.
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
  /*  1
     /  \
    2    3
   / \  / \
  4   5 6  7
  
  */
//1.Calculate the height of a Binay Tree.
int calculateHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    int lheight = calculateHeight(root->left);
    int rheight = calculateHeight(root->right);
    return max(lheight,rheight) + 1;
}
int32_t main(){
      Node* root = new Node(1);
      root->left = new Node(2);   
      root->right = new Node(3);
      root ->left->left = new Node(4);   
      root ->left->right = new Node(5);
      root ->right->left = new Node(7);   
      cout<<calculateHeight(root); 
      cout<<calcDiameter(root); 
    return 0;
}
//Diameter of a Binary Tree.
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
  /*  1
     /  \
    2    3
   / \  / \
  4   5 6  7
  
  */

int calculateHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(calculateHeight(root->left),calculateHeight(root->right)) + 1;
}
//2.calculate the diameter of a Binary Tree.
int calcDiameter(Node* root){
    if(root== NULL){
        return 0;
    }
    int lheight = calculateHeight(root->left);
    int rheight = calculateHeight(root->right);
    int currDiameter = lheight + rheight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter,max(lDiameter,rDiameter));

}
//Optimised Way to do so.
/*
int calcDiameter(Node* root, int* height){
    if(root==NULL{
        *height =0;
        return 0;
    }
    
    int lh = 0, rh = 0;
    
    int lDiameter = calcDiameter(root->left, &lh);
    int rDiameter = calcDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh,rh) + 1;

    return max(currDiameter, max(lDiameter,rDiameter));

}*/
int32_t main(){
      Node* root = new Node(1);
      root->left = new Node(2);   
      root->right = new Node(3);
      root ->left->left = new Node(4);   
      root ->left->right = new Node(5);
      root ->right->left = new Node(7);    
      cout<<calcDiameter(root); 

      // OPtimised approach
     /* int height = 0;
      cout<<calcDiameter(root,  &height)<<" ";*/
    return 0;
}