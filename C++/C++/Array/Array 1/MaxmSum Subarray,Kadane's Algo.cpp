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