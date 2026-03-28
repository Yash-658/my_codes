// https://leetcode.com/problems/combination-sum-ii/

// TC: O(2^n) SC: O(n)

// class Solution {
// public:

//     void solve(int ind, int currSum, const vector<int>& nums, int target, vector<int> &temp, vector<vector<int>> &ans) {
//         for(int i = ind; i < nums.size(); i++) {
//             if(i != ind && nums[i] == nums[i-1]) continue;

//             if(currSum + nums[i] == target) {
//                 temp.push_back(nums[i]);
//                 ans.push_back(temp);
//                 temp.pop_back();
//                 return;
//             }

//             else if(currSum + nums[i] < target) {
//                 temp.push_back(nums[i]);
//                 solve(i+1, currSum + nums[i], nums, target, temp, ans);
//                 temp.pop_back();
//             }

//             else{
//                 return;
//             }
//         }
//     }


//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(candidates.begin(), candidates.end());   // why sorting? Ans: so I can prune recursion early

//         vector<vector<int>> ans;
//         vector<int> temp;
//         solve(0, 0, candidates, target, temp, ans);
//         return ans;
//     }
// };