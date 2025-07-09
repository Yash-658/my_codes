#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <unordered_set>
using namespace std;

// EXPLANATION- https://youtu.be/dAZJgVFHpqA?si=wprt5YXHz6FyfzEy

class Node
    {
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *removeDuplicates(Node *head)
{
    unordered_set<int> visited;
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL) {
        if(visited.find(curr->data) == visited.end()) {
            // usko nhi mila map mai element
            visited.insert(curr->data);
            prev = curr;
        }

        else{
            // usko mil gya ye element
            prev->next = curr->next;
            delete curr;
        }
        curr = prev->next;
    }

    return head;
}

int main(){
    
return 0;
}