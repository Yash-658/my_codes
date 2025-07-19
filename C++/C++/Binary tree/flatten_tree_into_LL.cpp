    // TC - O(n) in skewed tree, SC- O(1)
    
        // void flatten(TreeNode* root) {
        //     TreeNode* curr = root;
        //     while(curr != NULL) {                   // this will handle the edge case too, when root is NULL
        //         if(curr->left != NULL) {            // add this left subtree in right branch~

        //             // find left nodes rightmost node~ (inorder predecessor)
        //             TreeNode* temp = curr->left;
        //             while(temp->right != NULL) {          // this while loop has an amortized TC of O(N),
        //                 temp = temp->right;               // that means for the whole program this will run at max N times
        //             }

        //             temp->right = curr->right;
        //             curr->right = curr->left;     // linking left sub-tree in the right side   

        //             curr->left = NULL;            // remove the link
        //         }   

        //         curr = curr->right;
        //     }
        // }