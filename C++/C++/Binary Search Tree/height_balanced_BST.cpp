/*
Step 1 – Inorder Traversal:
You collect the nodes in sorted order using inorder DFS traversal → O(N) time and O(N) space.

Step 2 – Rebuild BST:
You rebuild a height-balanced BST from the sorted array (inorder list) using the divide-and-conquer approach → also O(N) time and O(logN) space for recursion stack.

TC: O(N)   SC: O(N)
*/


// class Solution {
// void in_dfs(TreeNode* root, vector<int> &inorder) {
//     // base case
//     if(!root) return;

//     in_dfs(root->left, inorder);
//     inorder.push_back(root->val);
//     in_dfs(root->right, inorder);
// }

// TreeNode* balance(const vector<int> &inorder, int start, int end) {
//     // base case
//     if(start > end) return nullptr;

//     int mid = (start+end)/2;
//     TreeNode* new_node = new TreeNode(inorder[mid]);
//     new_node->left = balance(inorder, start, mid-1);
//     new_node->right = balance(inorder, mid+1, end);
//     return new_node;
// }

// public:
//     TreeNode* balanceBST(TreeNode* root) {
//         // create inorder vector
//         vector<int> inorder;
//         in_dfs(root, inorder);
//         root = balance(inorder, 0, inorder.size()-1);
//         return root;
//     }
// };