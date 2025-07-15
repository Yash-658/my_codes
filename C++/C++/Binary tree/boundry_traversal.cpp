// ✅ What Should Boundary Traversal Do?
// The boundary traversal of a binary tree should return nodes in the following order:

// Left boundary (excluding leaf nodes)

// All leaf nodes (from left to right)

// Right boundary (excluding leaf nodes, in bottom-up order)

// class Solution {
//     // Add left boundary excluding leaves
//     void addLeftBoundary(Node* root, vector<int>& res) {
//         Node* curr = root->left;
//         while (curr) {
//             if (!(curr->left == NULL && curr->right == NULL))
//                 res.push_back(curr->data);  // skip leaves
//             curr = (curr->left) ? curr->left : curr->right;
//         }
//     }

//     // Add all leaf nodes (modified pre-order style)
//     void addLeaves(Node* root, vector<int>& res) {
//         if (!root) return;
//         if (!root->left && !root->right) {
//             res.push_back(root->data);  // leaf node
//             return;
//         }
//         addLeaves(root->left, res);
//         addLeaves(root->right, res);
//     }

//     // Add right boundary in bottom-up using recursion, excluding leaves
//     void addRightBoundary(Node* root, vector<int>& res) {
           // base case~
//         if(!root) return;
        
    //     // if right exists, go in right~
    //     if(root->right) addRightBoundary(root->right, res);
        
    //     else {
    //         // if left exists, go left
    //         if(root->left) addRightBoundary(root->left, res);
            
    //         // if leaf node, return~
    //         else return;
    //     }
        
    //     res.push_back(root->data);
    // }

// public:
//     vector<int> boundaryTraversal(Node* root) {
//         vector<int> res;
//         if (!root) return res;

//         // Root is added only if it's not a leaf
//         if (!(root->left == NULL && root->right == NULL))
//             res.push_back(root->data);

//         addLeftBoundary(root, res);   // 1. Left boundary
//         addLeaves(root, res);         // 2. Leaf nodes
//         addRightBoundary(root->right, res);  // 3. Right boundary from right child

//         return res;
//     }
// };
