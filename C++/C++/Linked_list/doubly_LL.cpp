#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Node {
    public:
    Node *previous;
    int data;
    Node *next;

    Node(int data) {
        this->previous = NULL;
        this->data = data;
        this->next = NULL;
    }
};


void insertDLL(Node* &head, int index, int data) {     

    if(head == NULL) {                        // if DLL is empty
        head = new Node(data);
        return;
    }

    if(index == 1) {                          // inserting at head position
        Node *temp = new Node(data);
        temp->next = head;
        head->previous = temp;
        head = temp;
        return;
    }

    Node *new_node = new Node(data);
    Node *temp = head;
    
    for (int i = 2; i < index; i++)
    {
        temp = temp->next;
    }

    new_node->previous = temp;

    if(temp->next == NULL) {                  // inserting at tail position
        temp->next = new_node;
        return;
    }

    new_node->next = temp->next;

    temp->next = new_node; 
    new_node->next->previous = new_node;
}

void deleteDLL(Node* &head, int index) {
    if(index == 1) {                                 // if deleting head 

        if(head->next != NULL) {                     // if head is not the only element in this DLL
            head->next->previous = NULL;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;

    for (int i = 2; i < index; i++)
    {
        temp = temp->next;
    }

    Node *deleting_node = temp->next;
    temp->next = deleting_node->next;

    if(deleting_node->next == NULL) {               // if deleting tail
        delete deleting_node;
        return;
    }

    deleting_node->next->previous = temp;
    delete deleting_node;
}

void printDLL(Node *head) {
    if(head == NULL) {
        cout<<"No element to print~ ";
    }

    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
}

int getLength(Node *head) {
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}

int main(){
    Node *head = new Node(8);
    insertDLL(head, 1, 6);
    insertDLL(head, 3, 12);

    // printDLL(head);
    insertDLL(head, 3 , 10);
    printDLL(head);

    deleteDLL(head, 1);
    printDLL(head);

    // cout<<getLength(head)<<endl;
    return 0;
}