
/* 
📌 Function: dfs(TreeNode* root, int &diameter)
Base case:

If the node is NULL, its height is 0, and there’s nothing more to do.

Recursive case:

We recursively get the height of the left (lh) and right (rh) subtrees.

We then compute lh + rh — this represents the number of edges on the longest path passing through the current node.

If this value is greater than the current diameter, we update it.

Return value:

We return max(lh, rh) + 1, which is the height of the current node's subtree.
*/

// int dfs(TreeNode* root, int &diameter) {
//     if (!root) return 0;

//     int lh = dfs(root->left, diameter);   // left subtree height
//     int rh = dfs(root->right, diameter);  // right subtree height

//     diameter = max(diameter, lh + rh);    // update diameter if needed

//     return max(lh, rh) + 1;               // return height of this subtree
// }

// int diameterOfBinaryTree(TreeNode* root) {
//     int diameter = 0;
//     dfs(root, diameter);
//     return diameter;
// }
