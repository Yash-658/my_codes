// https://leetcode.com/problems/two-sum/
// TC: O(n) SC: O(n)     

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> val_to_ind;                   // considering the avg case where opr's on unordered_map takes O(1) TC, otherwise we know in the worst case its O(n)

//         for(int i = 0; i < nums.size(); i++) {
//             int val_needed = target - nums[i];
//             if(val_to_ind.find(val_needed) != val_to_ind.end()) {
//                 return {val_to_ind[val_needed], i};
//             }

//             else{
//                 val_to_ind[nums[i]] = i;
//             }
//         }

//         return {-1,-1};
//     }
// };