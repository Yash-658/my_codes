// 1st approach, use hashmap to store frquencies of 0s 1s 2s and then modify the array in-place~ TC: O(n) SC: O(1)

// 2nd approach: DUTCHS NATIONAL FLAG: same TC and SC 
// The dutch national flag algorithm involves sorting the nums array by partitioning it into 3 segments.
// nums[0]...nums[low - 1] : This part should consist of all zeroes.
// nums[low]...nums[mid - 1] : This part should consist of all ones.
// nums[mid]...nums[end of array] : This part should consist of all twos.

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0, mid = 0, high = nums.size() - 1;

//         while(mid <= high) {
//             if(nums[mid] == 0) swap(nums[low++], nums[mid++]);
//             else if(nums[mid] == 1) mid++;
//             else {
//                 // mid == 2
//                 swap(nums[mid], nums[high--]);
//             }
//         }
//     }
// };