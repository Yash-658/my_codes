// https://www.naukri.com/code360/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&leftPanelTabValue=PROBLEM
// inorder store krke easily hojayega but O(1) SC mai krne ke liye bohot gnda hai ye, ache se pdh

// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
//     pair<int, int> res;
    
//     // first search that node with the data "key"
//     TreeNode* key_node = root;
//     TreeNode* predecessor = nullptr;
//     TreeNode* successor = nullptr;
    
//     while(key_node) {
//         if(key_node->data == key) break;

//         else if(key_node->data > key) {
//             successor = key_node;
//             key_node = key_node->left;
//         }

//         else {
//             predecessor = key_node;
//             key_node = key_node->right;
//         }
//     }

//     // if key exists, further calculations~
//     if(key_node) {
//         // predecessor calculation~
//         if(key_node->left) {
//             predecessor = key_node->left;
//             while(predecessor->right != NULL) {
//                 predecessor = predecessor->right;
//             }
//         }

//         // successor calculation~
//         if(key_node->right) {
//             successor = key_node->right;
//             while(successor->left != NULL) {
//                 successor = successor->left;
//             }
//         }
//     }

//     res.first = (predecessor ? predecessor->data : -1);
//     res.second = (successor ? successor->data : -1);
//     return res;
// }