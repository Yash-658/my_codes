// Metric	Complexity
// Time	O(N + kL)
// Space	O(H + kL)
// Optimized?	✅ Yes


// class Solution {
// public:
//     void post_dfs(TreeNode* root, int &curr_sum, int targetSum,  vector<int> &path, vector<vector<int>> &ans) {
//         // base case
//         if(!root) return;

//         path.push_back(root->val);
//         curr_sum += root->val;

//         // if it's a leaf node, check if curr_sum == targetSum, if it is, then add this path to ans
//         if(!root->left && !root->right && curr_sum == targetSum) ans.push_back(path);

//         // recurse for left and right
//         post_dfs(root->left, curr_sum, targetSum, path, ans);
//         post_dfs(root->right, curr_sum, targetSum, path, ans);
        
//         // backtrack
//         curr_sum = curr_sum - root->val;
//         path.pop_back();
//     }

//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<vector<int>> ans;
//         vector<int> path;
//         int curr_sum = 0;
//         post_dfs(root, curr_sum, targetSum, path, ans);
//         return ans;
//     }
// };