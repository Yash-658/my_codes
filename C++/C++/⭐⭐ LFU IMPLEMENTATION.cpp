// https://leetcode.com/problems/lru-cache/

// Time Complexity: get() = O(1), put() = O(1) (average case, due to unordered_map), I could use functions to avoid repeating code several times here for readability~

// class Node{
//     public:
//     int key;
//     int value;
//     Node *prev;
//     Node *next;

//     Node(int key, int value) {
//         this->key = key;
//         this->value = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// DLL STRUCTURE: front-Most Recent used.......Least Recent used-tail

// class LRUCache {
// public:
//     unordered_map<int, Node*> keyToNode;
//     Node *front;
//     Node *tail;
//     int capacity;

//     LRUCache(int capacity) {
//         front = new Node(-1, -1);
//         tail = new Node(-1, -1);

//         // connect front and tail
//         front->next = tail;
//         tail->prev = front;
    
//         this->capacity = capacity;
//     }
    
//     int get(int key) {
//         // if exists~
//         if(keyToNode.contains(key)) {
//             // put this node to the front of DLL
//             Node* temp = keyToNode[key];
//             int val = temp->value;

//             temp->prev->next = temp->next;
//             temp->next->prev = temp->prev;

//             temp->next = front->next;
//             front->next = temp;
//             temp->prev = front;
//             temp->next->prev = temp;

//             return val;
//         }

//         // if doesn't exists
//         else{
//             return -1;
//         }
//     }
    
//     void put(int key, int value) {
//         if(keyToNode.contains(key)) {
//             // update the value and put it in front~
//             Node* temp = keyToNode[key];

//             temp->prev->next = temp->next;
//             temp->next->prev = temp->prev;

//             temp->next = front->next;
//             front->next = temp;
//             temp->prev = front;
//             temp->next->prev = temp;
//             temp->value = value;
//         }

//         else {
//             // check if capacity full
//             if(keyToNode.size() == capacity) {
//                 // now to store more, we will have to remove LFU element
//                 // remove the elem just before the tail of the DLL

//                 Node *temp = tail->prev;
//                 temp->prev->next = temp->next;
//                 temp->next->prev = temp->prev;

//                 //remove from the map~
//                 keyToNode.erase(temp->key);
//                 delete temp;
//             }

//             // add it to the front~
//             Node *temp = new Node(key, value);
//             temp->next = front->next;
//             front->next = temp;
//             temp->prev = front;
//             temp->next->prev = temp;

//             // add it to map
//             keyToNode[key] = temp;
//         }
//     }
// };
