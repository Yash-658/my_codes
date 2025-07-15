// optimized approach in O(n) and SC- O(height)

// class Solution {
//   public:
//     pair<bool, int> post_dfs(Node* root) {
//         pair<bool, int> ans;
        
//         // if NULL node
//         if(!root) {
//             ans.first = true;
//             ans.second = 0;
//             return ans;
//         }
    
//         // if leave node
//         if(!root->left && !root->right) {
//             ans.first = true;
//             ans.second = root->data;
//             return ans;
//         }
        
        
//         pair<bool, int> left = post_dfs(root->left);
//         pair<bool, int> right = post_dfs(root->right);
        
//         // take sum
//         int left_sum = left.second;
//         int right_sum = right.second;
        
//         // set ans.first
//         ans.first = false;
//         if((left_sum + right_sum == root->data) && left.first && right.first) ans.first = true;
        
//         // set ans.second
//         ans.second = left_sum + right_sum + root->data;  // we know right_sum + left_sum = root->data
        
//         return ans;
//     }
    
//     bool isSumTree(Node* root) {
//         return post_dfs(root).first;
//     }
// };