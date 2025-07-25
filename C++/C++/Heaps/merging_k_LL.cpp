// This approach uses a min-heap to always extract the smallest current node among all k linked lists.
// We start by pushing the first node of each list into the heap, and as we extract the smallest node, we push its next node (if any).
// 🔁 This ensures sorted merging in one pass — Time: O(n log k), Space: O(k).


// #include<queue>
// class Compare {
//     public: 
//     bool operator() (Node* a, Node* b){
//         return a->data > b->data;
//     }
// };

// Node* mergeKLists(vector<Node*> &listArray)
// {
//     priority_queue<Node*, vector<Node*>, Compare> minHeap;
    
//     Node* dummy = new Node(-1);
//     Node* tail = dummy;

//     // store the 1st nodes of all LLs 
//     for(Node* i: listArray) {
//         minHeap.push(i);
//     }

//     while(!minHeap.empty()) {
//         Node* temp = minHeap.top();
//         minHeap.pop();

//         if(temp->next) minHeap.push(temp->next);

//         tail->next = temp;
//         tail = tail->next;
//     }

//     return dummy->next;
// }
