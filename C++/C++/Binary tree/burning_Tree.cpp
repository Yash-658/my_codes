// first, we create a child to parent mapping as infection was going upwards too so we needed a way to access parent nodes from child nodes,
// then we started BFS from the infection starting node and after each level of infection, we increased the time~

// TC- O(n) SC- O(n)


// class Solution {
// public:
//     void parent_mapping(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &child_parent, 
//     int start, TreeNode* &startNode) 
//     {
//         // base case
//         if(!root) return;
        
//         if(root->val == start) startNode = root;

//         // map itself with its children
//         if(root->left) child_parent[root->left] = root;
//         if(root->right) child_parent[root->right] = root;

//         // recursively do it for its left and right child
//         parent_mapping(root->left, child_parent, start, startNode);
//         parent_mapping(root->right, child_parent, start, startNode);
//     }

//     int amountOfTime(TreeNode* root, int start) {
//         // create a mapping from child node to their parent nodes~  and it will also store the start node 
//         unordered_map<TreeNode*, TreeNode*> child_parent;
//         child_parent[root] = NULL;              // (root node parent is NULL)
//         TreeNode* startNode;
//         parent_mapping(root, child_parent, start, startNode);
        
//         // now run BFS from startNode as that's our point of infection, then to know which nodes are already infected, 
//         // just store them into an unordered_set so that we don't queue them up again~

//         int time = -1;
//         queue<TreeNode*> q;
//         unordered_set<TreeNode*> visited;        // will track nodes we have already visited
//         q.push(startNode);                      // as infection starts from the startNode 
//         visited.insert(startNode);

//         while(!q.empty()) {
//             int level_size = q.size();
//             for(int i = 0; i < level_size; i++) {
//                 TreeNode* temp = q.front();
//                 q.pop();

//                 // add adjacent nodes in the queue after checking if we already visited them~ 
//                 // and if we didn't, queue them up and also mark them visited
//                 if(temp->left && visited.find(temp->left) == visited.end()) {
//                     visited.insert(temp->left);
//                     q.push(temp->left);
//                 }

//                 if(temp->right && visited.find(temp->right) == visited.end()) {
//                     visited.insert(temp->right);
//                     q.push(temp->right);
//                 }

//                 if(child_parent[temp] && visited.find(child_parent[temp]) == visited.end()) {
//                     visited.insert(child_parent[temp]);
//                     q.push(child_parent[temp]);
//                 }
//             }
//             time++;          // just increase the time~
//         }
//         return time;
//     }
// };