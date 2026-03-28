// https://leetcode.com/problems/combination-sum/

// quickies: how did I used ind parameter to remove duplicate subsets?
//           why sorting? Ans: so I can prune recursion early 

// class Solution {
// public:
//     void solve(int ind, int curr, const vector<int>& nums, int target, vector<int> &temp, vector<vector<int>> &ans) {
//         int n = nums.size();
        
//         for(int i = ind; i < n; i++){
//             if(curr + nums[i] == target) {
//                 temp.push_back(nums[i]);
//                 ans.push_back(temp);
//                 temp.pop_back();
//                 return;
//             }

//             else if(curr + nums[i] < target) {
//                 temp.push_back(nums[i]);
//                 solve(i, curr + nums[i], nums, target, temp, ans);
//                 temp.pop_back();
//             }

//             else{
//                 return;
//             }
//         }
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         sort(candidates.begin(), candidates.end());

//         vector<vector<int>> ans;
//         vector<int> temp;
//         solve(0, 0, candidates, target, temp, ans);
//         return ans;
//     }
// };