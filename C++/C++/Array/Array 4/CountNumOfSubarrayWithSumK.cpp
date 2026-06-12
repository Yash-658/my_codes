// PREIX SUM YAAD RKHO~
// JB BHI LONGEST SUBARRAYS, ya subarr count krni ho with sum,xor k, we use prefix methods~

// https://leetcode.com/problems/subarray-sum-equals-k/description/

// O(n) O(n)

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int ans = 0, sum = 0;
//         unordered_map<int, int> prefixSum;    // tells me no. of subarrays I saw of a specific 'sum'

//         for(int num: nums) {
//             sum += num;

//             // check if this prefixSum itself is == k
//             if(sum == k) ans++;

//             // if we ecountererd subarrs with sum "sum - target", add into ans~
//             ans += prefixSum[sum-k];
            
//             // store this prefix sum~
//             prefixSum[sum]++;
//         }

//         return ans;
//     }
// };