// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_10870953

// IT WONT WORK: you tried it with two pointers but it will only work if +ve numbers were there, so use prefix sum method~

// OPTIMAL AND CORRECT METHOD TO USE AS -VE NUMBERS ARE ALSO INVOLVED~ (PREFIX SUM)

// TC: O(n) SC: O(n)

// #include <bits/stdc++.h> 
// int getLongestSubarray(vector<int>& nums, int k){
//     unordered_map<int, int> prefixSum;
//     int ans = 0, sum = 0;

//     for(int i = 0; i < nums.size(); i++) {
//         sum += nums[i];

//         // check if this prefix sum == k
//         if(sum == k) ans = max(ans, i+1);

//         // check if there exists a prefix sum = sum-k
//         if(prefixSum.find(sum-k) != prefixSum.end()) {
//             ans = max(ans, i - prefixSum[sum-k]);
//         }

//         // now store the prefix sum, but first check if there already exists a same prefixSum~
//         if(prefixSum.find(sum) == prefixSum.end()) {           // understand how we handled duplicate prefixSum
//             prefixSum[sum] = i;
//         }
//     }

//     return ans;
// }