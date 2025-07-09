#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// class for LL node
class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data) {                         // passed head pointer as a reference cuz we want it to actually change
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* head, int data) {

    Node *temp = new Node(data);
    while(head->next != NULL) {
        head = head->next;
    }

    head->next = temp;
}

void insertAtMiddle(Node *head, int index, int data) {       // isme you didn't handled the case when it'll be asking to insert an element at the first or last node

    Node *temp = new Node(data);
    for (int i = 2; i < index; i++)
    {
        head = head->next;
    }

    temp->next = head->next;
    head->next = temp;
}


void deleteNode(Node* &head, int index) {                    // handled all cases, deleting starting, middle or last node
    if(index == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;                                         // deallocating the memory that was allocted to the first node
        temp->next = NULL;
        return;
    }

    Node *temp = head;
    for (int i = 2; i < index; i++) {
        temp = temp->next;
    }

    temp->next = temp->next->next;
}

void printLL(Node *head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node *head = new Node(8);

    // insertAtHead(head, 6);

    insertAtTail(head, 10);
    insertAtTail(head, 15);
    insertAtTail(head, 20);

    printLL(head);
    // insertAtMiddle(head, 4, 12);

    deleteNode(head, 1);
    printLL(head);
    return 0;
} 


