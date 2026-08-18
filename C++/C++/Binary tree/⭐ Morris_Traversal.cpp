// INORDER MORRIS TRAVERSAL WITH THREADED BINARY TREE, O(n) + O(1)

// vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> res;
//         TreeNode* curr = root;
        
//         while(curr != NULL) {
//             // check if left subtree exists
//             if(curr -> left == NULL) {
//                 // print current and move right
//                 res.push_back(curr->val);
//                 curr = curr->right;
//             }
            
//             else {
//                 // if left subtree exists, find it's predecessor( rightmost node of the left node )
//                 TreeNode* pred = curr->left;
//                 while(pred -> right != NULL && pred->right != curr) {
//                     pred = pred->right;
//                 }
                
//                 // now if pred->right is pointing to NULL, that means we are visiting this subtree first time
//                 // otherwise if it's pointing to curr, that means we have made the thread and visited this subtree, 
//                 // so remove the link and go right now~
//                 if(pred->right == NULL) {
//                     pred->right = curr;    // make thread
//                     curr = curr->left;     // move current to left
//                 }
                
//                 else {
//                     // thread already exists~
//                     pred->right = NULL;     // remove the thread
//                     res.push_back(curr->val);   // add current node
//                     curr = curr->right;    //  move curr to right
//                 }
//             }
//         }
//         return res;
//     }


// pre_order

    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> res;
    //     TreeNode* curr = root;
        
    //     while(curr != NULL) {
    //         // if left subtree doesn't exists
    //         if(curr -> left == NULL) {
    //             // print current and move right
    //             res.push_back(curr->val);
    //             curr = curr->right;
    //         }
            
    //         else {
    //             // if left subtree exists, find it's predecessor( rightmost node of the left node )
    //             TreeNode* pred = curr->left;
    //             while(pred -> right != NULL && pred->right != curr) {
    //                 pred = pred->right;
    //             }
                
    //             // now if pred->right is pointing to NULL, that means we are visiting this subtree first time
    //             if(pred->right == NULL) {
    //                 pred->right = curr;         // make thread
    //                 res.push_back(curr->val);   // add current node
    //                 curr = curr->left;          // move current to left
    //             }
                    
    //             // if it's pointing to NULL, that means we have made the thread and visited this subtree, 
    //             // so remove the link and go right now~
    //             else {
    //                 // thread already exists~
    //                 pred->right = NULL;     // remove the thread
    //                 curr = curr->right;    //  move curr to right
    //             }
    //         }
    //     }
    //     return res;
    // }