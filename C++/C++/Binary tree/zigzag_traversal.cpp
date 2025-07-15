// its implementing BFS without using the 'NULL' seperator logic, its more efficient and as we are using the queue size logic we can directly put the values in the correct order without using reverse()

// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;

//         // edge case
//         if(!root) return ans;

//         queue<TreeNode*> q;
//         q.push(root);

//         bool left_to_right = true;

//         while(!q.empty()) {
//             int level_size = q.size();
//             vector<int> temp_ans(level_size);

//             for(int i = 0; i < level_size; i++) {
//                 TreeNode* temp = q.front();s
//                 q.pop();

//                 int index = (left_to_right ? i : level_size-1-i);
//                 temp_ans[index] = temp->val;

//                 if(temp->left) q.push(temp->left);
//                 if(temp->right) q.push(temp->right);
//             }

//             ans.push_back(temp_ans);
//             left_to_right = !left_to_right;
//         }

//         return ans;
//     }
// };