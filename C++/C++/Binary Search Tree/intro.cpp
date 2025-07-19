#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <queue>
using namespace std;

// -> TC of Insertion, searching, and deletion in a BST- T(n)=O(height of BST)⇒O(logn) (best/avg), O(n) (worst) 
// -> Inorder traversal of BST gives elements in sorted order
// -> Min value in a BST is the left most value and Max value is the rightmost value

/*
Inorder Predecessor: The node that comes just before the given key in the inorder traversal (i.e., the maximum value smaller than the key).
Inorder Successor: The node that comes just after the given key in the inorder traversal (i.e., the minimum value greater than the key).

In BST, Predecessor = max in left subtree (rightmost node in left subtree).
IN BST, Successor = min in right subtree (leftmost node in right subtree).
*/

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

void Insert(Node* &root, int val) {
    // base case
    if(!root) {
        root = new Node(val);
        return;
    }

    if(val > root->val) {
        Insert(root->right, val);
    }

    else {
        Insert(root->left, val);
    }
}

void createBST(Node* &root) {
    int a;
    cout<<"Enter elements to make BST: ";
    cin >> a;
    while(a != -1) {
        Insert(root, a);
        cin >> a;
    }
}

void levelOrderTraversal(Node *root) {             // Breadth First Search (BFS) (prints tree level wise)
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node *temp = q.front();
        q.pop();

        if(temp == NULL) {                           // this NULL logic is just for the separator, to print different levels at different lines~
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }

        else {
            cout<<temp->val<<" ";

            if(temp->left) {
                q.push(temp->left);
            }

            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void Inorder(Node *root) {
    // LNR
    if(root == NULL) {
        return;
    }

    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}

void Postorder(Node *root) {
    // LRN
    if(root == NULL) {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->val<<" ";
}

void Preorder(Node *root) {
    // NLR
    if(root == NULL) {
        return;
    }

    cout<<root->val<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

// int main(){
//     // sample - 10 15 20 16 5 4 9 8 -1
//     Node *root = nullptr;
//     createBST(root);
//     // levelOrderTraversal(root);
//     Inorder(root);
//     cout<< endl;
//     Preorder(root);
//     cout<< endl;
//     Postorder(root);
//     cout<< endl;
// return 0;
// }