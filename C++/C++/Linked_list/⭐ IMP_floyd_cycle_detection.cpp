#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Node {
    public :
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

// to check if a loop exists in LL
// it always works if a loop exists cuz, once both enter loop, 
// if cycle length = 'k', there's finite 'k' steps of a clock, and relatively fast is +1 and slow doesn't move, 
// so eventually fast will meet slow in at most 'k' steps

bool floydCycleDetection(Node *head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;

        if(slow == fast) {
            return true;
        }
    }

    return false;
}

// it will return NULL if loop doesn't exist and if it exists, it will return the starting node of the loop~
// why this works? proof~ https://youtu.be/VxOFflTXlXo?si=hjD07XG0FSAf3IRG&t=1530          

// https://youtu.be/VxOFflTXlXo?si=_dL5Q90Go3_9tYFD&t=2021 here I know now that to complete cycle from the intersection point, 
// I have to travel "A" distance more, its not required that this will complete the cycle only once,
//  its possible that I complete the cycle twice when I travel "A" distance from the point of intersection

Node *getStartingNode(Node *head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow -> next;
        if(slow == fast) {
            break;
        }
    }

    if(fast == NULL || fast->next == NULL) {
        return NULL;
    }

    slow = head;

    while(slow != fast) {
        slow = slow -> next;
        fast = fast -> next;
    }

    return slow;
}

// removing the loop~
Node *removeLoop(Node *head)
{
    Node *starting_node = getStartingNode(head);
    if(starting_node != NULL) {
        Node *temp = starting_node;
        while(temp->next != starting_node) {
            temp = temp->next;
        }
        temp->next = NULL;
    }

    return head;
     
}

int main(){
    
return 0;
}