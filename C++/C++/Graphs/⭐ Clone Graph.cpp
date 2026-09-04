// https://leetcode.com/problems/clone-graph/description/

// class Solution {
// public:
//     Node* cloneGraph(Node* node) {
//         if(!node) return nullptr;

//         unordered_map<Node*, Node*> mp;
//         queue<Node*> q;

//         mp[node] = new Node(node->val);
//         q.push(node);

//         while(!q.empty()) {
//             Node* curr = q.front();
//             q.pop();

//             for(Node* adj : curr->neighbors) {
//                 if(!mp.count(adj)) {
//                     mp[adj] = new Node(adj->val);
//                     q.push(adj);
//                 }

//                 mp[curr]->neighbors.push_back(mp[adj]);
//             }
//         }

//         return mp[node];
//     }
// };