// https://leetcode.com/problems/maximum-width-of-binary-tree/description/

// SMJHO KESE KRA AUR PHIR CONSTRAINTS KE LIYE KYA BKCHODI KRI

// int widthOfBinaryTree(TreeNode* root) {
//         int maxWidth = 0;

//         queue<pair<TreeNode*, long long>> q;
//         q.push({root, 1});

//         while(!q.empty()) {
//             int currSize = q.size();
//             int startPos = q.front().second;
//             for(int i = 0; i < currSize; i++) {
//                 auto [curr, currPos] = q.front();
//                 q.pop();

//                 int pos = currPos - startPos;
//                 maxWidth = max(maxWidth, pos + 1);

//                 if(curr->left) q.push({curr->left, 1LL*2*pos});
//                 if(curr->right) q.push({curr->right, 1LL*2*pos + 1});
//             }
//         }

//         return maxWidth;
//     }