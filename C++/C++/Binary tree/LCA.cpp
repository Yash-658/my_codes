
    // there are two approaches, 1) by storing the path in two vectors from the root to p and from the root to q, and then in the path taking the last common node.
    //                           2) the solution beneath is a recursive modified post order dfs, this is the most efficient solution as it solves in a single travsersal and doesn't take any extra memory

    // TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     // base case
    //     if(!root || root == p || root == q) {
    //         //if it's a NULL or this current node is p or q, then we gotta return it~ in case NULL, this will return NULL & if p and q , then p and q respectively 
    //         return root;
    //     }

    //     TreeNode* left = lowestCommonAncestor(root->left, p, q);
    //     TreeNode* right = lowestCommonAncestor(root->right, p, q);

    //     // if both non-NULL that means this is our LCA
    //     if(left && right) return root;

    //     // if one of them is NULL, return the other one, (if both NULL then this will return NULL)
    //     return (!left ? right:left);.
    // }
