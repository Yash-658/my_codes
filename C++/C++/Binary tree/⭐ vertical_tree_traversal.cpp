// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/

// TC: O(nlogn) SC:O(n)

// If multiple nodes in the same row and same column. In such a case, sort these nodes by their values
// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         vector<vector<int>> ans;
//         map<int, vector<int>> levelNodes;

//         queue<pair<TreeNode*, int>> q;
//         q.push({root, 0});

//         while(!q.empty()) {
//             int currSize = q.size();
//             unordered_map<int, vector<int>> temp;
//             for(int i = 0; i < currSize; i++) {
//                 auto [currNode, level] = q.front();
//                 q.pop();

//                 temp[level].push_back(currNode->val);
//                 if(currNode->left) q.push({currNode->left, level-1});   
//                 if(currNode->right) q.push({currNode->right, level+1});
//             }

//             for(auto &[col, list]: temp) {
//                 sort(list.begin(), list.end());
//                 levelNodes[col].insert(levelNodes[col].end(), list.begin(), list.end());
//             }
//         }


//         for(auto [_,list]: levelNodes) {
//             ans.push_back(list);
//         }

//         return ans;
//     }
// };