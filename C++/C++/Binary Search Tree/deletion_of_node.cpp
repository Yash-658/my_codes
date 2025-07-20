#include "intro.cpp"

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

//When deleting a node in a BST, we must maintain the BST property: For every node: all values in the left subtree are less, and all values in the right subtree are greater.

// ✅ Why Use Inorder Successor or Predecessor when handling the "two children" case?
// Because these are the only values in the tree that are guaranteed to:

// Be close in value to the node being deleted.
// Preserve the BST property when used to replace the node.

// ✅ Inorder Successor:
// The smallest node in the right subtree.

// All values in right subtree are greater, so the smallest one is the closest greater value.
// Replacing the deleted node with this keeps all left values < new value, and all right values > new value.

// ✅ Inorder Predecessor:
// The largest node in the left subtree.
// It’s the closest smaller value, and preserves the BST property similarly.

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