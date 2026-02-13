// https://leetcode.com/problems/3sum/

// Brute Force~ USING THREE LOOPS O(n^3)


// BETTER APPROACH: USING TWO LOOPS, fixing an element and treating the question as two sum~ O(n^2 logm)
//                  BUT SC: O(n) (ignoring ans arr);

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();

//         set<vector<int>> ans;            // O(logm) opr on set
//         unordered_set<int> window;
    
//         for(int i = 0; i < n; i++) {
//             for(int j = i+1; j < n; j++) {
//                 int curr_sum = nums[i] + nums[j];
//                 int elem_req = -curr_sum;
//                 if(window.find(elem_req) != window.end()) 
//                 {
//                     vector<int> temp = {nums[i], nums[j], elem_req};
//                     sort(temp.begin(), temp.end());
//                     ans.insert(temp);
//                 }

//                 else{
//                     window.insert(nums[j]);
//                 }
//             }
//             window.clear();
//         }

//             vector<vector<int>> ansVector(ans.begin(), ans.end());
//             return ansVector;
//      }
// };

// MOST OPTIMAL APPROACH~ O(n^2) O(1)

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
        
//         // Step 1: Sort the array
//         // Sorting helps:
//         // 1) Use two-pointer technique
//         // 2) Skip duplicates easily
//         sort(nums.begin(), nums.end());

//         vector<vector<int>> ans;
//         int n = nums.size();

//         // Step 2: Fix one element (nums[i])
//         // We need at least 3 elements, so loop till n-2
//         for (int i = 0; i < n - 2; i++) {

//             // Skip duplicate fixed elements
//             // Prevents duplicate triplets
//             if (i > 0 && nums[i] == nums[i - 1])
//                 continue;

//             // Step 3: Two-pointer for remaining array
//             int j = i + 1;      // left pointer
//             int k = n - 1;      // right pointer

//             while (j < k) {

//                 int sum = nums[i] + nums[j] + nums[k];

//                 if (sum == 0) {

//                     // Found valid triplet
//                     ans.push_back({nums[i], nums[j], nums[k]});

//                     // Skip duplicates for left pointer
//                     while (j < k && nums[j] == nums[j + 1])
//                         j++;

//                     // Skip duplicates for right pointer
//                     while (j < k && nums[k] == nums[k - 1])
//                         k--;

//                     // Move both pointers inward
//                     j++;
//                     k--;
//                 } 
//                 else if (sum < 0) {
//                     // Need bigger sum → move left forward
//                     j++;
//                 } 
//                 else {
//                     // Need smaller sum → move right backward
//                     k--;
//                 }
//             }
//         }

//         return ans;
//     }
// };
