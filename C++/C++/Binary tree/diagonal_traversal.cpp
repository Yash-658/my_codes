
// class Solution {
//     void in_dfs(Node *root, int dg_num, map<int, vector<int>> &dg_mapping) {
//         // base case
//         if(!root) return;
        
//         // move left
//         in_dfs(root->left, dg_num+1, dg_mapping);
        
//         // push current element at right diagonal number~
//         dg_mapping[dg_num].push_back(root->data);
        
//         // go right
//         in_dfs(root->right, dg_num, dg_mapping);
//     }
    
//   public:
//     vector<int> diagonal(Node *root) {
//         vector<int> ans;
//         map<int, vector<int>> dg_mapping;
        
//         // make the mapping with each diagonals
//         in_dfs(root, 0, dg_mapping);
        
//         for(const auto& pair: dg_mapping) {
//             for(const int &i: pair.second) {
//                 ans.push_back(i);
//             }
//         }
        
//         return ans;
//     }
// };