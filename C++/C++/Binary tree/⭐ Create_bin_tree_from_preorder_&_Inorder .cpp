

// class Solution {
// public:
//     TreeNode* solve(vector<int>& preorder, int pre_start, int pre_end, vector<int>& inorder, 
//     int in_start, int in_end, unordered_map<int, int> &in_map) 
//     {
//         // base case~
//         if(pre_start > pre_end || in_start > in_end) {
//             return nullptr;
//         }

//         TreeNode* root = new TreeNode(preorder[pre_start]); // make a root node~
//         int root_pos = in_map[root->val];                   // find it's position in in_map~
//         int elements_left = root_pos - in_start;            // num of elements at the left of root in inorder

//         // traverse for left and right~
//         root->left = solve(preorder, pre_start+1, pre_start + elements_left, inorder, in_start, root_pos-1, in_map);
//         root->right = solve(preorder, pre_start+elements_left+1, pre_end, inorder, root_pos+1, in_end, in_map);

//         return root;
//     }

//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int n = preorder.size();
//         // this map will be mapping elements of inorder arr with their indexes~
//         unordered_map<int, int> in_map;
//         for(int i = 0; i < n; i++) {
//             in_map[inorder[i]] = i;
//         }

//         TreeNode* res = solve(preorder, 0, n-1, inorder, 0, n-1, in_map);
//         return res;
//     }
// };