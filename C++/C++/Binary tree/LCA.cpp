
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

    // SAME TC AND SC, but the above one is soo much more elegant~

    // pair<bool, bool> dfs(TreeNode* curr, TreeNode* p, TreeNode* q, TreeNode* &LCA) {
    //     // base case~
    //     if(!curr) return {false, false};

    //     pair<bool, bool> lTree = dfs(curr->left, p, q, LCA);
    //     pair<bool, bool> rTree = dfs(curr->right, p, q, LCA);

    //     if(LCA) return {true, true};

    //     if(curr == p) {
    //         // if any of its child saw q~
    //         if(lTree.second || rTree.second) {
    //             LCA = curr;
    //             return {true, true};
    //         }

    //         else{
    //             return {true, false};
    //         }
    //     }

    //     else if(curr == q) {
    //         // if any of its child saw p~
    //         if(lTree.first || rTree.first) {
    //             LCA = curr;
    //             return {true, true};
    //         }

    //         else{
    //             return {false, true};
    //         }

    //     }

    //     else if((lTree.first || rTree.first) && (lTree.second || rTree.second)) {
    //         // if both p and q aren't connected and so this is the LCA
    //         LCA = curr;
    //         return {true, true};
    //     } 

    //     return {(lTree.first || rTree.first) , (lTree.second || rTree.second)};
    // } 

    // TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     TreeNode* LCA = NULL;
    //     dfs(root, p, q, LCA);
    //     return LCA;
    // }
