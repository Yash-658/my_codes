// “Preorder, Inorder and Postorder Traversal in One Traversal” or “All Traversals in One Traversal.”

// vector<vector<int>> getTreeTraversal(TreeNode *root){
//     vector<vector<int>> ans;
//     vector<int> inorder,  preorder, postorder;
//     stack<pair<TreeNode*, int>> st;
//     st.push({root, 1});

//     while(!st.empty()) {
//         auto [currNode, state] = st.top();
//         st.pop();

//         if(state == 1) {
//             // store in preorder, add next state, add left child
//             preorder.push_back(currNode->data);
//             st.push({currNode, 2});
//             if(currNode->left) st.push({currNode->left, 1});
//         }

//         else if(state == 2) {
//             // store in inorder, add next state, add right child
//             inorder.push_back(currNode->data);
//             st.push({currNode, 3});
//             if(currNode->right) st.push({currNode->right, 1});
//         }

//         else{
//             // store in postorder
//             postorder.push_back(currNode->data);
//         }
//     }

//     ans.push_back(inorder);
//     ans.push_back(preorder);
//     ans.push_back(postorder);

//     return ans;
// }