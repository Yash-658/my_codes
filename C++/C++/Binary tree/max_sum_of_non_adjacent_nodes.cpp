// https://chatgpt.com/share/68790f9e-3840-8005-8fd4-8091d01b343e

// class Solution {
//     pair<int, int> solve(Node *root) {
//         // base case
//         if(!root) return {0,0};
        
        
//         pair<int, int> left = solve(root->left);
//         pair<int, int> right = solve(root->right);
        
//         // including current node, so we will exclude its child nodes
//         int include = root->data + left.second + right.second;
        
//         // excluding current node, so we choose maximum sum from left and right subtree if we include or exclude the current childrens~
//         int exclude = max(left.first, left.second) + max(right.first, right.second);
        
//         return {include, exclude};
//     }
    
//   public:
//     // Function to return the maximum sum of non-adjacent nodes.
//     int getMaxSum(Node *root) {
//         pair<int,int> res = solve(root);
//         return max(res.first, res.second);
//     }
// };