// https://leetcode.com/problems/majority-element/

// Approach1: use hashmap O(n) O(n)
// Approach2: use sorting and return middle element O(nlogn) O(1)

// Approch3: Moore's Voting Algo~ O(n) O(1)

// Moore’s Voting Algorithm works by pairwise cancellation: different elements cancel each other’s votes.
// Since the majority element appears more than ⌊n/2⌋ times, it cannot be fully canceled by all other elements combined regardless the order.
// Therefore, after all cancellations, the remaining candidate must be the majority element.

// soldiers ke group wali analogy yaad rkhna~

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         // moore's voting algo~
//         int elem, count = 0;

//         for(int &num: nums) {
//             if(count == 0) elem = num;

//             if(num == elem) count++;
//             else count--;
//         }

//         // not verifying for majority element asthe question states it always exists~
//         return elem;
//     }
// };