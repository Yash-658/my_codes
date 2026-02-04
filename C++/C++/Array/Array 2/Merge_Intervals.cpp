// https://leetcode.com/problems/merge-intervals/

// “Once intervals are sorted by start time, we only need to compare the current interval with the last merged one. 
// If they overlap, we merge them; otherwise, we push the interval as-is.”

// TC: O(nlogn) SC: O(1) excluding output array~

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end());

//         vector<vector<int>> ans;
//         ans.push_back(intervals[0]);

//         for(int i = 1; i < intervals.size(); i++) {
//             // if overlapping
//             if(ans.back()[1] >= intervals[i][0]) {
//                 ans.back()[1] = max(ans.back()[1], intervals[i][1]);
//             } 
//             // not overlapping
//             else {
//                 ans.push_back(intervals[i]);
//             }
//         }

//         return ans;
//     }
// };
