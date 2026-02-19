// fix it~ https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_10870953

// #include <bits/stdc++.h> 
// int getLongestSubarray(vector<int>& nums, int k){
//     // first make a hash vector which will tell if there exists a -ve number "ahead" in the arr~ (doesn't tell about the curr element~)
//     int n = nums.size();

//     vector<bool> hash(nums.size(), false);
    
//     for(int i = n-2; i >= 0; i--) {
//         if(nums[i+1] < 0 || hash[i+1] == true) hash[i] = true;
//     }


//     int ans = 0, sum = 0, low = 0, high = 0;

//     while(low <= high && low < n && high < n) {
//         sum += nums[high];

//         if(sum == k) {
//             int length = high-low+1;
//             ans = max(ans, length);

//             if(hash[high] == true) {
//                 high++;
//             }

//             else{
//                 sum -= nums[low];
//                 low++;
//             }
//         }

//         else if(sum < k) {
//             high++;
//         }

//         else{
//             if(hash[high] == true) {
//                 high++;
//             }

//             else{
//                 sum -= nums[low];
//                 low++;
//             }
//         }
//     }

//     return ans;
// }