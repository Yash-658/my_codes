// most optimal, TC- O(n), SC - O(n) ,, can also be done with pre-order dfs~

// class Solution {
//     // first element would be height and the second would be the sum till that node 
//     pair<int, int> post_dfs(Node *root) {
//         // base case
//         pair<int, int> ans;
        
//         if(!root) {
//             ans.first = 0;
//             ans.second = 0;
//             return ans;
//         }
        
//         pair<int, int> left = post_dfs(root->left);
//         pair<int, int> right = post_dfs(root->right);
        
//         // store the max height into ans.first
//         ans.first = max(left.first, right.first) + 1;
        
//         if(left.first != right.first)
//         ans.second = (left.first < right.first ? right.second: left.second) + root->data;
        
//         else {
//             // if both path have same length, return the bigger sum
//             ans.second = max(left.second, right.second) + root->data;
//         }
        
//         return ans;
//     }
    
//   public:
//     int sumOfLongRootToLeafPath(Node *root) {
//         return post_dfs(root).second;
//     }
// };