// https://leetcode.com/problems/majority-element-ii/

// Approach1: use hashmap O(n) O(n)
// Approach2: use sorting O(nlogn) O(1)

// Boyer–Moore (n/3) solution.

// Mental model to remember forever 🧠
// n/2:
// Cancel pairs → one survivor

// n/3:
// Cancel triples → two survivors   (BASICALLY 3 DISTINCT ELEMENTS AAJEYNGE JB CANCEL KRENGE~)

// General form:
// For > n/k → track k-1 candidates

// “We generalize Boyer–Moore. Any element appearing more than n/3 times cannot be completely eliminated by removing groups of three distinct elements. 
// Since there can be at most two such elements, we maintain two candidates and cancel triples. A final pass verifies them.”

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         // there's no gurantee if a majority element exist, there can be 0,1 or 2 elements with freq > n/3

//         int elem1 = 0, elem2 = 0, count1 = 0, count2 = 0, n = nums.size();

//         for(int &num: nums) {
//             if(num == elem1) count1++;

//             else if(num == elem2) count2++;

//             else if(count1 == 0) {
//                 elem1 = num;
//                 count1++;
//             }

//             else if(count2 == 0) {
//                 elem2 = num;
//                 count2++;
//             }

//             else{
//                 count1--; count2--;
//             }
//         }

//         // for verification~ 

//         count1 = 0, count2 = 0;
//         for(int &num: nums) {
//             if(num == elem1) count1++;
//             else if(num == elem2) count2++;
//         }

//         vector<int> ans;
//         if(count1 > n/3) ans.push_back(elem1);
//         if(count2 > n/3) ans.push_back(elem2);
//         return ans;
//     }
// };