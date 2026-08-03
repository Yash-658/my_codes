#include<iostream>
#include "D:\Git\my_codes\C++\C++\Binary tree\BFS_level_order_traversal.cpp"
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

// Time: O(n)
// Auxiliary Space: O(h)

*/

// ⭐⭐⭐ how will you do this iteratively?

void Inorder(node *root) {
    // LNR
    if(root == NULL) {
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(node *root) {
    // LRN
    if(root == NULL) {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void Preorder(node *root) {
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