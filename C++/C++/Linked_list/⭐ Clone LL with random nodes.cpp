/* 
This problem has 3 approaches~
IMP

1) simply cloning and then repeatedly taking the distance of the random node in old and then travelling that much distance in new, TC = O(n^2), SC = O(1)
2) simply cloning and then maintaining a old_to_new map that maps old nodes with their respective copy of new nodes, then new_node->random = old_to_new[old_node->random], TC = O(n), SC = O(n)
3) VERY GOOD LOGIC, changing links, TC = O(n), SC = O(1),, most optimised solution,, read 2) first before trying this one~

You have done all three here: https://leetcode.com/problems/copy-list-with-random-pointer/
*/

/*
3rd solution: 

Node* copyRandomList(Node* head) {
    if(!head) return NULL;

    Node* curr = head;

    // 1. Insert copy nodes
    while(curr) {
        Node* copy = new Node(curr->val);
        copy->next = curr->next;
        curr->next = copy;
        curr = copy->next;
    }

    // 2. Assign random pointers
    curr = head;
    while(curr) {
        if(curr->random)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }

    // 3. Separate lists
    curr = head;
    Node* newHead = head->next;

    while(curr) {
        Node* copy = curr->next;
        curr->next = copy->next;
        if(copy->next)
            copy->next = copy->next->next;

        curr = curr->next;
    }

    return newHead;
}
*/