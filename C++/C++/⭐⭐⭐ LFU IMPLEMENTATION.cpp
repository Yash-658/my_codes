// https://leetcode.com/problems/lfu-cache/description/

// bs memory cleanup dekhna hai agr krna ho toh, baaki pura shi hai

// class Node{
//     public:
//     int key, val, freq;
//     Node *prev, *next;
//     Node(int _key, int _val) {
//         key = _key;
//         val = _val;
//         freq = 1;
//         next = prev = NULL;
//     }
// };

// class List{
//     public:
//     Node *head, *tail;
//     int size;
    
//     List() {
//         head = new Node(-1, -1);
//         tail = new Node(-1, -1);
//         size = 0;
//         head->next = tail;
//         tail->prev = head;
//     }

//     void insertAtFront(Node *node) {
//         Node *temp = head->next;
//         node->next = temp;
//         head->next = node;
//         temp->prev = node;
//         node->prev = head;
//         size++;
//     }

//     void removeNode(Node *node) {
//         node->next->prev = node->prev;
//         node->prev->next = node->next;
//         node->next = NULL;
//         node->prev = NULL;
//         size--;
//     }
// };



// class LFUCache {
// public:
//     unordered_map<int,List*> freqToList;
//     unordered_map<int, Node*> keyToNode;
//     int capacity, currSize, minFreq;

//     LFUCache(int capacity) {
//         this->capacity = capacity;
//         currSize = 0;
//         minFreq = 0;
//     }

//     void updateNode(Node *node) {
//         // remove this node from the curr freq List and put it in the next DLL~
//         int currFreq = node->freq;
//         List *currFreqList = freqToList[currFreq];

//         // as this node will be removed from this list, check if it was the last node of this freq, if it was the minFreq list and will be empty now, the minFreq will increase by 1~
//         if(currFreq == minFreq && currFreqList->size == 1) minFreq++; 

//         List *newFreqList = new List();
//         if(freqToList.contains(currFreq+1)) {
//             newFreqList = freqToList[currFreq+1];
//         }

//         currFreqList->removeNode(node);
//         newFreqList->insertAtFront(node);
//         node->freq += 1;
//         freqToList[currFreq+1] = newFreqList;   // if we created newlist rn, it will get stored in map~
//     }
    
//     int get(int key) {
//         if(!keyToNode.contains(key)) return -1;
//         Node *temp = keyToNode[key];
//         updateNode(temp);
//         return temp->val;
//     }
    
//     void put(int key, int value) {
//         // key already exists~
//         if(keyToNode.contains(key)) {
//             Node *node = keyToNode[key];
//             node->val = value;
//             updateNode(node);
//         }

//         else {
//             // check if capacity is full~
//             if(currSize == capacity) {
//                 // now remove LFU node, if many nodes of same freq, remove the LRU
//                 List *minFreqList = freqToList[minFreq];
//                 Node *nodeToRemove = minFreqList->tail->prev;
//                 minFreqList->removeNode(minFreqList->tail->prev);
//                 keyToNode.erase(nodeToRemove->key);
//                 currSize--;
//                 // Im not updating minFreq as we will be inserting a new node now anyways and then minFreq will be 1~
//             }

//             // insert new node and reset minFreq to 1~
//             currSize++;
//             minFreq = 1;
//             List *freqList = new List();
//             if(freqToList.contains(1)) freqList = freqToList[1];
//             Node *node = new Node(key, value);
//             freqList->insertAtFront(node);
//             freqToList[1] = freqList;
//             keyToNode[key] = node;
//         }
//     }
// };
