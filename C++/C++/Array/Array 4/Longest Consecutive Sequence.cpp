// https://leetcode.com/problems/longest-consecutive-sequence/description/

// better solution: O(nlogn)~

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size(), globalMax = 0, count = 1;
//         if(n == 0) return 0;
//         sort(nums.begin(), nums.end());

//         for(int i = 0; i < n-1; i++) {
//             if(nums[i] + 1 == nums[i+1]) {
//                 count++;
//             }

//             else if(nums[i] == nums[i+1]) {
//             }

//             else{
//                 globalMax = max(globalMax, count);
//                 count = 1;
//             }
//         }

//         globalMax = max(globalMax, count);
//         return globalMax;
//     }
// };


// MOST OPTIMAL SOLUTION: O(n)
// INTUTION: only start counting length of sequences from the start of a sequence cuz that will give you the longest length~

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size(), globalMax = 0, count = 1;

//         unordered_set<int> s;           // avg O(1) TC for insert, delete search~

//         for(int i: nums) {
//             s.insert(i);
//         }

//         for(int i: s) {
//         // check if there exists an element in the set which can come before in the sequence~ (ex: elem = 3, look for 2)
//         // if it exists, no point of counting length of sequence from 3~
//         // if it doesn't, this elem is probably the start of a seq, start counting~ ( ex: if elem = 1)
//             int elem = i;
//             if(s.find(elem-1) == s.end()) {
//                 while(s.find(elem + 1) != s.end()) {
//                     elem = elem + 1;
//                     count++;
//                 }

//                 globalMax = max(count, globalMax);
//                 count = 1;
//             }
//         }

//         return globalMax;
//     }
// };

