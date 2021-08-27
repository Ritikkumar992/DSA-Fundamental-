//Catalan Number Application.
#include<bits/stdc++.h>
using namespace std;

//To find nth catalan number.
int catalan(int n){
    if(n<=1){
        return 1;
    }

    int res = 0;
    for(int i = 0;i<n;i++){
        res += catalan(i) * catalan(n-i-1);
    }

    return res;
}
int main(){
      for(int i =0;i<10;i++){
         cout<<catalan(i)<<" ";
      }
      cout<<"\n";
    return 0;
}
//Possible BSTs.
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

vector <Node*> constructTree(int start, int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i = start; i<=end;i++){
        vector<Node*> leftSubtree = constructTree(start, i-1);
        vector<Node*> rightSubtree = constructTree(i+1,end);

        for(int j= 0;j<leftSubtree.size();j++){
            Node* left = leftSubtree[j];
            for(int k = 0;k<rightSubtree.size();k++){
                Node* right = rightSubtree[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);

            }
        }
    }

    return trees;

}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<Node*> totalTrees = constructTree(1,3);
    for(int i =0;i<totalTrees.size();i++){
        cout<<(i+1)<<" : ";
        preorder(totalTrees[i]);
        cout<<endl;
    }
    return 0;
}