#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Node {
    public: 
    int data;
    Node *next;

    Node(int data) {
        this-> data = data;
    }

    // ~Node() {
    //     int value = this->data;
    //     if(this->next != NULL) {
    //         delete next;
    //         next = NULL;
    //     }
    //     cout<<" memory is free for node with data "<< value << endl;
    // }
    
};


void insertCLL(Node* &tail, int data, int after_this) {
    Node *temp = tail;
    Node *new_node = new Node(data);

    if(tail == NULL) {                                     // if CLL is empty
        tail = new_node;
        tail->next = tail;
    }

    // if tail is the only element and after this exists
    else if(tail->next == tail && tail->data == after_this) 
    {
        tail->next = new_node;
        new_node->next = tail;
    }

    // if tail is the only element and after this doesn't exists
    else if(tail->next == tail && tail->data != after_this) {
        cout<<"There's no "<< after_this <<" in this CLL, insertion failed! "<<endl;
    }

    //if there's multiple nodes and also if after_this exists in tail
    else if(tail->data == after_this) {
        new_node->next = tail->next;
        tail->next = new_node;
        tail = new_node;
    }

    //if there's multiple nodes and also if after_this doesn't exists/ exists in any node
    else {
        temp = temp->next;

        while(temp->data != after_this) {

            if(temp == tail) {
                // after_this element doesn't exist in whole CLL
                cout<<"There's no "<< after_this <<" in this CLL, insertion failed! "<<endl;
                return; 
            }

            temp = temp->next;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void deleteCLL(Node *&tail, int value) {
    // asssuming CLL isn't empty

    // if there exists a single node~ tail
    if(tail->next == tail && tail->data == value) {
        delete tail;
        tail = NULL;
    }

    // if multiple nodes, and deleting tail
    else if(tail->data == value) {
        Node* temp2 = tail;
        while(temp2->next != tail) {
            temp2 = temp2->next;
        }
        temp2->next = tail->next;

        Node* temp = tail;
        tail = tail->next;
        delete temp;
        temp = NULL;
    }

    
    else {
        Node *temp = tail;
        do {
            if(temp->next->data == value) {
                Node *to_delete = temp->next;
                temp->next = temp->next->next;
                delete to_delete;
                to_delete = NULL;
                return;
            }
            temp = temp->next;
        } while( temp!=tail );
        cout<<"No node with value: "<<value<<" found!"<<endl;
    }

}

void printCLL(Node* &tail) {
    // if CLL empty
    if(tail == NULL) {
        cout<<"Nothing to print!"<<endl;
        return;
    }
    
    // printing tail~
    cout<<tail->data<<" ";
    Node *temp = tail->next;

    // printing rest of the elements
    while(temp != tail) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// to delete all allocated space after using it
void deleteEntireCLL(Node* &tail) {
    if (tail == NULL) return;

    Node* current = tail->next; // Start from the head
    tail->next = NULL; // Break the circle to make it a linear list

    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    tail = NULL;
    cout<<"Entire CLL deleted!"<<endl;
}


int main() {
    Node *tail = new Node(10);
    tail->next = tail;
    insertCLL(tail,12,10);
    insertCLL(tail,15,12);
    // printCLL(tail);
    // insertCLL(tail,11,10);
    // printCLL(tail);
    // deleteCLL(tail,12);
    printCLL(tail);

    deleteEntireCLL(tail);        // to delete all the dynamically allocated space!
    return 0;
}
    