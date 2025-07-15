// Most optimised~ TC- O(N) SC- O(h) in balanced tree, and O(n) in skewed tree

// ye height return krega aur check bhi krega if balanced~ (its a postorder DFS)

// class Solution {
// public:
//     
//     int dfs(TreeNode* root, bool &is_balanced) { 
//         // base case
//         if(root == NULL) {
//             return 0;
//         }

//         int left = dfs(root->left, is_balanced);
//         int right = dfs(root->right, is_balanced);

//         if(abs(left - right) > 1) {
//             is_balanced = false;   // updating is_balanced if needed~
            
//         }
//         return max(left, right) + 1;
//     }

//     bool isBalanced(TreeNode* root) {
//         bool is_balanced = true;
//         dfs(root, is_balanced);
//         return is_balanced;
//     }
// };