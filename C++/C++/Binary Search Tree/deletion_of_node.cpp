#include "intro.cpp"

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

Node* deleteFromBST(Node* root, int val) {
    // base case
    if(!root) return NULL;

    if(root->val == val) {
        // 0 child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // 1 child
        if(root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if(root->left == NULL && root->right != NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        // 2 child,, two options, we can either choose from the left or right subtree~
        // if we want to choose from left sub-tree we will replace this node with the maxm value of left, 
        // or if we want to delete from right subtree, we will take the minm value from right~
        if(root->left != NULL && root->right != NULL) {
            Node* temp = root->right;
            while(temp->left != NULL) {
                temp = temp->left;
            }

            int minm = temp->val;
            root->val = minm;
            root->right = deleteFromBST(root->right, minm);
            return root;
        }
    }

    else if(val > root->val) {
        root->right = deleteFromBST(root->right, val); 
    }

    else{ 
        root->left = deleteFromBST(root->left, val); 
    }
}

int main(){
    // sample - 10 15 20 16 5 4 9 8 -1
    Node *root = nullptr;
    createBST(root);
    levelOrderTraversal(root);
    deleteFromBST(root, 10);
    cout<<endl;
    levelOrderTraversal(root);

return 0;
}