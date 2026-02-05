// had to do this without any extra space, had to merge both sorted into the first arr~
// if we did this the usual way by the starting index, we would have lost elements of 1st arr,
// so we did sorting by taking the largest number each time from both arr and inserting it at the last of first arr~

// TC: O(log(m+n)) SC: O(1)

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m-1, j = n-1;

//         for(int x = m+n-1; x >= 0; x--) {

//             if(i >= 0 && j >= 0) {
//                 if(nums1[i] >= nums2[j]) {
//                     swap(nums1[i], nums1[x]);
//                     i--;
//                 }

//                 else{
//                     nums1[x] = nums2[j];
//                     j--;
//                 }
//             }
            
//             else if(i >= 0) {
//                 swap(nums1[i], nums1[x]);
//                 i--;
//             }

//             else{
//                 nums1[x] = nums2[j];
//                 j--;
//             }
//         }
//     }
// };