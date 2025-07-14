#include<iostream>
#include "level_order_traversal.cpp"
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

/* 

Inorder = LNR
Preorder = NLR
Postorder = LRN

L -> left part mai jao
N -> current node print kro
R -> right part mai jao

*/


void Inorder(b_node *root) {
    // LNR
    if(root == NULL) {
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(b_node *root) {
    // LRN
    if(root == NULL) {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void Preorder(b_node *root) {
    // NLR
    if(root == NULL) {
        return;
    }

    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}


// int main() {
//     b_node *root;
//     /* 2 3 6 -1 -1 5 -1 -1 4 -1 -1 */ 
//     root = buildTree(root);


//     Inorder(root);
//     cout<<endl;

//     Preorder(root);
//     cout<<endl;

//     Postorder(root);
//     cout<<endl;

//     return 0;
// }