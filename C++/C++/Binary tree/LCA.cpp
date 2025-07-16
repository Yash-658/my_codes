


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
