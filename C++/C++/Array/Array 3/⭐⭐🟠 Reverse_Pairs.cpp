// https://leetcode.com/problems/reverse-pairs/

// GAND FAAD QUESTION, logic just like inversion count, just check how are we counting reverse_pairs inside the merge fxn

// class Solution {
// public:

//     void merge(int left, int mid, int right, vector<int>& nums, vector<int>& temp, int& count) {
//         int i = left, j = mid + 1, curr = left;

//         for(int i = left; i <= mid; i++ ) {
//             while(j <= right && nums[i] > 1LL*2*nums[j]) {
//                 j++;
//             }

//             count += j-(mid+1);
//         }

//         j = mid+1;

//         while (i <= mid && j <= right) {
//             if (nums[i] <= nums[j]) {
//                 temp[curr] = nums[i++];
//             }

//             else {
//                 temp[curr] = nums[j++];
//             }
//             curr++;
//         }

//         while (i <= mid) {
//             temp[curr++] = nums[i++];
//         }

//         while (j <= right) {
//             temp[curr++] = nums[j++];
//         }

//         for (int i = left; i <= right; i++) {
//             nums[i] = temp[i];
//         }
//     }

//     void mergeSort(int left, int right, vector<int>& nums, vector<int>& temp, int& count) {
//         if (left >= right)
//             return;

//         int mid = (left + right) / 2;

//         mergeSort(left, mid, nums, temp, count);
//         mergeSort(mid + 1, right, nums, temp, count);

//         merge(left, mid, right, nums, temp, count);
//     }

//     int reversePairs(vector<int> nums) {
//         int count = 0, n = nums.size();
//         vector<int> temp(n);
//         mergeSort(0, n - 1, nums, temp, count);
//         return count;
//     }
// };