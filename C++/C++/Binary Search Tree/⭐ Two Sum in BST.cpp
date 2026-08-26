// it uses the BST iterator logic, make sure you understand that before doing this one~
// BST iterator - https://leetcode.com/problems/binary-search-tree-iterator/description/

// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

// BST Two Sum: Use two stacks to simulate inorder (smallest → largest) and reverse-inorder (largest → smallest) as two pointers; TC: O(N), SC: O(H)

// class Solution {
// public:
//     bool findTarget(TreeNode* root, int k) {
//         stack<TreeNode*> in, rin;
//         TreeNode* curr = root;

//         while(curr) {
//             in.push(curr);
//             curr = curr->left;
//         }

//         curr = root;
//         while(curr) {
//             rin.push(curr);
//             curr = curr->right;
//         }

//         while(in.top() != rin.top()) {
//             TreeNode* inTop = in.top(), *rinTop = rin.top();
//             int currSum = inTop->val + rinTop->val;
//             if(currSum == k) return true;
//             else if(currSum > k) {
//                 rin.pop();
//                 TreeNode* temp = rinTop->left;
//                 while(temp) {
//                     rin.push(temp);
//                     temp = temp->right;
//                 }
//             }

//             else{
//                 in.pop();
//                 TreeNode* temp = inTop->right;
//                 while(temp) {
//                     in.push(temp);
//                     temp = temp->left;
//                 }
//             }
//         }

//         return false;
//     }
// };