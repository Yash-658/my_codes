// Max Sum BST: Postorder DP returning (min, max, sum) for each subtree and invalidating non-BST subtrees via sentinel bounds; TC: O(N), SC: O(H).

// class Solution {
// public:

// // it returns (min, max, sum) of a subtree~  if a subtree is invalid return constraints such that they never pass~

// // n = [1, 4*10^4] so no need for (!root) condn
// vector<int> helper(TreeNode* root, int &ans) {

//     int currVal = root->val;
//     vector<int> ltree = {INT_MAX, INT_MIN, 0}, rtree = {INT_MAX, INT_MIN, 0};
//     if(root->left) ltree = helper(root->left, ans);
//     if(root->right) rtree = helper(root->right, ans);

//     // if lTree or rTree are invalid or invalid with this tree's currVal, return~
//     if(currVal <= ltree[1] || currVal >= rtree[0]) return {INT_MIN, INT_MAX, -1};
    
//     else{
//         // that means from this node is a valid BST~
//         ans = max(ans, currVal + ltree[2] + rtree[2]);
//     }

//     int currMin = min(currVal, ltree[0]);
//     int currMax = max(currVal, rtree[1]);
//     return {currMin, currMax, currVal + ltree[2] + rtree[2]};
// }

// // leaf nodes are always valid BST
//     int maxSumBST(TreeNode* root) {
//         int ans = INT_MIN;
//         helper(root, ans);
//         return (ans < 0 ? 0 : ans);
//     }
// };