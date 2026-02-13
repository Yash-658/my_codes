// https://leetcode.com/problems/3sum/

// Brute Force~ USING THREE LOOPS O(n^3)


// BETTER APPROACH: USING TWO LOOPS, fixing an element and treating the question as two sum~ O(n^2 logn),  as insertion in set is O(log m)

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();

//         set<vector<int>> ans;
//         unordered_set<int> window;
    
//         for(int i = 0; i < n; i++) {
//             for(int j = i+1; j < n; j++) {
//                 int curr_sum = nums[i] + nums[j];
//                 int elem_req = -curr_sum;
//                 if(window.find(elem_req) != window.end()) 
//                 {
//                     vector<int> temp = {nums[i], nums[j], elem_req};
//                     sort(temp.begin(), temp.end());
//                     ans.insert(temp);
//                 }

//                 else{
//                     window.insert(nums[j]);
//                 }
//             }
//             window.clear();
//         }

//         vector<vector<int>> ansVector;
//         for(auto &temp: ans) {
//             ansVector.push_back(temp);
//         }

//         return ansVector;
//     }
// };

