// O(n^2) solution is quite simple, just for every node as a starting point, check if theres a path with sum = k

// class Solution {
//         void allPaths(TreeNode *root, int k, int &count, int sum = 0) {
//             // base case
//             if(!root) return;
            
//             // add current value to sum
//             long long curr_sum = static_cast<long long>(sum) + root->val;
            
//             // check if curr_sum == k, if it is, increase count;
//             if(curr_sum == k) count++;
            
//             allPaths(root->left, k, count, curr_sum);
//             allPaths(root->right, k, count, curr_sum);
//         }

//     void solve(TreeNode *root, int k, int &count) {
//         // if null return
//         if(!root) return;
        
//         allPaths(root, k, count);
//         solve(root->left, k, count);
//         solve(root->right, k, count);
//     }

// public:
//     int pathSum(TreeNode* root, int k) {
//         int count = 0;
//         solve(root, k, count);
//         return count;
//     }
// };


// now the optimized version, TC O(n)~ using prefix sum, hashmap and backtracking~

// class Solution {
//     void solve(long long runningSum, TreeNode* root, int targetSum, unordered_map<long long int, int> &prefixFreq, 
//     int &validPathCount) 
//     {
//         // base case, if root is null, there can't be a path ending at this node that results in targetSum
//         if(!root) return;

//         runningSum += static_cast<long long>(root->val);
//         int neededFreq = prefixFreq[runningSum-targetSum];
//         validPathCount += neededFreq;

//         // store this prefix sum
//         prefixFreq[runningSum]++;

//         // check in left and right nodes now if a path ends at them with a sum = targetSum 
//         solve(runningSum, root->left, targetSum, prefixFreq, validPathCount);
//         solve(runningSum, root->right, targetSum, prefixFreq, validPathCount);

//         // backtrack and remove the runninSum from the prefixfreq map
//         prefixFreq[runningSum]--;
//     }

// public:
//     int pathSum(TreeNode* root, int targetSum) {
//         int validPathCount = 0;
//         unordered_map<long long int, int> prefixFreq;
//         prefixFreq[0]++;
//         solve(0, root, targetSum, prefixFreq, validPathCount);
//         return validPathCount;
//     }
// };