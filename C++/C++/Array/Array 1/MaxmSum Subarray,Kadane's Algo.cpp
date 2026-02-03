// INTUTION: there's no use of carrying a -ve sum ahead when we are interested in the maxm sum

// Most Optimised version~

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxm = INT_MIN, sum = 0;

//         for(int i: nums) {
//             sum += i;
//             maxm = max(sum, maxm);
//             if(sum < 0) sum = 0;
//         }

//         return maxm;
//     }
// };


// I thought it this way~ same TC, just using two loops~

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int global_max = 0, temp_sum = 0;

//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] < 0 && temp_sum > global_max) {
//                 // -ve number, so first check current temp_sum with global_max~
//                 global_max = temp_sum;
//             }

//             temp_sum += nums[i];
            
//             if(temp_sum < 0) {
//             // if current temp_sum < 0, there's no point of carrying this sum forward as we need the maxm sum subarray
//                 temp_sum = 0;
//             }
//         }
        
//         // check for last element~
//         if(temp_sum > global_max) global_max = temp_sum;

//         // now if global_max is still 0, that means all the elements are <= 0~
//         // then the ans would be the maxm number from the array~
//         if(global_max == 0) {
//             global_max = INT_MIN;
//             for(int i = 0; i < nums.size(); i++) {
//                 if(global_max < nums[i]) global_max = nums[i];
//             }
//         }
        
//         return global_max;
//     }
// };