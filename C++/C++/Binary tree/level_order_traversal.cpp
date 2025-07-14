#include<iostream>
#include<stack>
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

    // -1 indicates NULL~
    if(data == -1) return NULL;

    root = new b_node(data);

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
        }

        else {
            cout<<temp->data<<" ";

            if(temp->left) {
                q.push(temp->left);
            }

            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void reverseLevelOrderTraversal(b_node *root) {
    queue<b_node*> q;
    stack<int> st;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        b_node *temp = q.front();
        q.pop();

        if(temp == NULL) {                           // this NULL logic is just for the separator, to print different levels at different lines~
            st.push(-1);
            if(!q.empty()) q.push(NULL);
        }

        else {
            st.push(temp->data);

            if(temp->right) {
                q.push(temp->right);
            }

            if(temp->left) {
                q.push(temp->left);
            }
        }
    }

    while(!st.empty()) {
        if(st.top() == -1) {
            cout<<endl;
        }

        else {
            cout<<st.top()<<" ";
        }

        st.pop();
    }
}

void buildFromLevelOrder(b_node* &root) {
    int data;
    cout<< "Enter data to insert at root node: ";
    cin >> data;
    root = new b_node(data);

    queue<b_node*> q;
    q.push(root);

    while(!q.empty()) {
        b_node *temp = q.front();
        q.pop();

        int left_value;
        cout<<"Enter left node value for "<<temp->data<<": ";
        cin>>left_value;

        if(left_value != -1) {
            temp->left = new b_node(left_value);
            q.push(temp->left);
        }
        

        int right_value;
        cout<<"Enter right node value for "<<temp->data<<": ";
        cin>>right_value;

        if(right_value != -1) {
            temp->right = new b_node(right_value);
            q.push(temp->right);
        }
    }
}

int main(){
    b_node *root;
    /* 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 -1 */ 
    root = buildTree(root);
    cout<<endl;
    cout<<"Printing tree breadth first~"<<endl;
    levelOrderTraversal(root);
    // reverseLevelOrderTraversal(root);

    // buildFromLevelOrder(root);
    // cout<<endl;
    // levelOrderTraversal(root);


return 0;
}