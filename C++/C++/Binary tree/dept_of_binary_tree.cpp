
// TC- O(n)  SC- if not a skewed tree, it's O(height) else when skewed tree, worst case SC is O(n)

// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         // base case 
//         if(root == NULL) {
//             return 0;
//         }

//         int left = maxDepth(root->left);
//         int right = maxDepth(root->right);

//         return max(left, right) + 1;
//     }
// };