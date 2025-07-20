/* normal inorder traversal~

 Most optimal solution:
 Time Complexity: O(N)
(We visit each node once during in-order traversal.)

Space Complexity: O(H)
(Stack space due to recursion ? height of tree.)

*/

// void in_dfs(TreeNode<int>* root, TreeNode<int>* &prev) {
//     // base case
//     if(!root) return;

//     in_dfs(root->left, prev);

//     // now link left subtree with prev and remove the previous link
//     prev->right = root;
//     root->left = nullptr;
//     prev = root;

//     in_dfs(root->right, prev);
// }


// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     TreeNode<int>* dummy = new TreeNode<int>(-1);
//     TreeNode<int>* prev = dummy;
//     in_dfs(root, prev);
//     return dummy->right;
// }