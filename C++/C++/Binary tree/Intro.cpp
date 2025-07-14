#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

class b_node {
    public: 
    int data;
    b_node *left;
    b_node *right;

    b_node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

b_node* buildTree(b_node *root) {
    int data;
    cout << "Enter data to insert: ";
    cin >> data;
    root = new b_node(data);

    // -1 indicates NULL~
    if(data == -1) return NULL;

    cout<<"Enter data for inserting in the left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting in the right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(b_node *root) {             // Breadth First Search (BFS) (prints tree level wise)
    queue<b_node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        b_node *temp = q.front();
        q.pop();

        if(temp == NULL) {                           // this NULL logic is just for the separator, to print different levels at different lines~
            cout<<endl;
            if(!q.empty()) q.push(NULL);
            continue;
        }

        cout<<temp->data<<" ";

        if(temp->left) {
            q.push(temp->left);
        }

        if(temp->right) {
            q.push(temp->right);
        }
    }
}


int main(){
    b_node *root;
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 -1
    root = buildTree(root);
    cout<<endl;
    cout<<"Printing tree breadth first~"<<endl;
    levelOrderTraversal(root);
return 0;
}