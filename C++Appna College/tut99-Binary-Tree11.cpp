//Left View of a Binary Tree.
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
/*    1
     /  \
    2    3
   / \  / \
  4   5 6  7
*/

void leftView(Node* root)
{
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n  = q.size();
        for(int i = 1;i<=n;i++){
            Node* curr = q.front();
            q.pop();

            if(i == 1){
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
        }
    }
}

int32_t main(){
    Node* root = new Node(5);
    root->left = new Node(3);   
    root->right = new Node(6);
    root ->left->left = new Node(2);   
    root ->left->right = new Node(4);
    //Left view
    leftView(root);  
    return 0;
}
