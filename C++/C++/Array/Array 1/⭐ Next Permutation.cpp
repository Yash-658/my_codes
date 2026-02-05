// first discuss brute force, i.e will generate all possible permutations in sorted order, then will do linear search to find the current permutation and will return the next permutation~
// TC of brute-force: O(n!*n)   (LEARN HOW TO CALCULATE ALL PERMUTATIONS WHEN YOU COME ON RECURSION PART)

// better solution: using next_permutation(arr.begin(), arr.end()) from the STL library, it has the same approach as the most optimal solution~  TC: O(n)

// MOST OPTIMAL SOLUTION: TC: O(n)   SC: O(1)

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         // 1st step: longer prefix match: find the dip
//         int ind = -1, n = nums.size();
//         for (int i = n - 2; i >= 0; i--) {
//             if (nums[i] < nums[i + 1]) {
//                 ind = i;
//                 break;
//             }
//         }

//         if (ind == -1) {
//             // that means this is the last permutation in lexicographic order,
//             // (and is increasing from the back) i.e I just have to reverse the
//             // array to get the first permutation
//         }

//         else {
//             // 2nd step: to find the smallest number which is greater than the
//             // ind as I know its an increasing curve from the back till ind~ I
//             // just need to find the first num from the back which's greater
//             // than ind

//             for (int i = n - 1; i > ind; i--) {
//                 if (nums[ind] < nums[i]) {
//                     // swap these~
//                     swap(nums[ind], nums[i]);
//                     break;
//                 }
//             }
//         }

//         // 3rd step, now we already have the prefix which is greater than
//         // the previous one now we just need to make sure the combinations
//         // of nums after ind is the smallest possible~ one way is to sort
//         // nums after ind but IMP OBSERVATION is after swapping~ the numbers
//         // after ind are still in a increasing order from the back, so we
//         // just reverse it will still give us the desired output~
//         reverse(nums.begin() + ind + 1, nums.end());
//     }
// };