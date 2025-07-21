
// ✅ Approach 1: Full Inorder Traversal + Merge
// Logic Recap:
// Do full inorder traversal of both BSTs into two arrays

// Merge the two sorted arrays into one result array

// Time Complexity:
// O(n) for first inorder
// O(m) for second inorder
// O(n + m) for merging the two arrays
// 🔹 Total: O(n + m)

// Space Complexity:
// O(n) for first inorder array
// O(m) for second inorder array
// O(n + m) for result array
// 🔹 Total: O(n + m)

// 🌟 You're storing all elements from both BSTs — hence higher space.

// ✅ Approach 2: Two-Stack Lazy Inorder (Current Approach)
// Logic Recap:
// Use two stacks to do lazy in-order traversal simultaneously

// Only push nodes as needed, mimicking two iterators

// Time Complexity:
// Every node is visited exactly once
// 🔹 Total: O(n + m)

// Space Complexity:
// At any point, each stack holds at most O(h1) and O(h2) nodes, where h1 and h2 are tree heights

// O(n + m) for result array
// 🔹 Total: O(h1 + h2 + n + m)

// 🌟 In practice, h1 and h2 are usually log n for balanced trees, so this is a space improvement over the previous approach.


// this is second approach code, you did made this yourself!, khushi mna :) IT"S THE MOST OPTIMAL, one more way to do this was by flattening these into two sorted LLs and then merging it

// void next_inorder(stack<TreeNode*> &s) {
//     TreeNode* temp = s.top();
//     s.pop();
//     // add the next smaller elements (right children's left path)
//     if(temp->right) {
//         temp = temp->right;
//         s.push(temp);
//         while(temp->left) {
//             temp = temp->left;
//             s.push(temp);
//         }
//     }
// }

// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// {
//     vector<int> res;
//     stack<TreeNode*> s1;
//     stack<TreeNode*> s2;

//     // create the intial two stacks
//     TreeNode* temp = root1;
//     s1.push(temp);
//     while(temp->left != NULL) {
//         temp = temp->left; 
//         s1.push(temp);
//     }

//     temp = root2;
//     s2.push(temp);
//     while(temp->left != NULL) {
//         temp = temp->left; 
//         s2.push(temp);
//     }

//     // now compare~
//     while(!s1.empty() && !s2.empty()) {
//         if(s1.top()->data > s2.top()->data) {
//             res.push_back(s2.top()->data);
//             // get next smaller element
//             next_inorder(s2);
//         }

//         else {
//             res.push_back(s1.top()->data);
//             // get next smaller element
//             next_inorder(s1);
//         }
//     }

//     // if second stack got empty first~
//     while(!s1.empty()) {
//         res.push_back(s1.top()->data);
//         next_inorder(s1);
//     }

//     // if first stack got empty first~
//     while(!s2.empty()) {
//         res.push_back(s2.top()->data);
//         next_inorder(s2);
//     }

//     return res;
// }