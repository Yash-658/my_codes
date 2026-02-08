// https://leetcode.com/problems/majority-element/

// Approach1: use hashmap O(n) O(n)
// Approach2: use sorting and return middle element O(nlogn) O(1)

// Approch3: Moore's Voting Algo~ O(n) O(1)

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