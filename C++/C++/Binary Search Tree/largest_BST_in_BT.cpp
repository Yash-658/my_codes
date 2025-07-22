// BRUTE FORCE-     go for every node and pass it into a is_validBST() fxn, if for any node the answer comes yes, then run a fxn which will return the size of the tree from that node,
//  O(n^2) & O(n)   do this for every node, and the maxm size is gonna be our answer~


// Optimal Approach~

// class NodeInfo {
//     public:
//     int max_size;
//     int min_value;
//     int max_value;

//     NodeInfo(int s, int minm, int maxm) {
//         max_size = s;
//         min_value = minm;
//         max_value = maxm;
//     }
// };

// // it's a preorder dfs
// NodeInfo helper(TreeNode* root) {
//     // base case
//     if(!root) return NodeInfo(0, INT_MAX, INT_MIN);

//     NodeInfo left = helper(root->left);
//     NodeInfo right = helper(root->right);

//     if(root->data > left.max_value && root->data < right.min_value) {
//         // this is a valid BST
//         return NodeInfo(left.max_size + right.max_size + 1, min(root->data, left.min_value), max(root->data, right.max_value));
//     }

//     else {
//         // if not a valid BST
//         return NodeInfo(max(left.max_size, right.max_size), INT_MIN, INT_MAX);
//     }
// }

// int largestBST(TreeNode * root){
//     return helper(root).max_size;
// }