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
//     void decreaseThird(const vector<int>& nums, int second, int &third) {
//         // make the sum smaller by decreasing third~
//         third--;
//         // remove duplicate processing~
//         while(second < third && nums[third] == nums[third+1]) {
//             third--;
//         }
//     }

//     void increaseSecond(const vector<int>& nums, int &second, int third) {
//         // make the sum greater by increasing 'second' index~
//         second++;
//         // remove duplicate processing~
//         while(second < third && nums[second] == nums[second-1]) {
//             second++;
//         }
//     }

//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> ans;
//         int n = nums.size();

//         int first = 0;
//         while(first < n-2) {
//             int second = first+1, third = n-1;
//             int target = -nums[first];
//             while(second < third) {
//                 int sum = nums[second] + nums[third];
//                 if(sum == target) {
//                     ans.push_back({nums[first], nums[second], nums[third]});
//                     increaseSecond(nums, second, third);
//                     decreaseThird(nums, second, third);
//                 }

//                 else if(sum > target) {
//                     decreaseThird(nums, second, third);
//                 }

//                 else{
//                     increaseSecond(nums, second, third);
//                 }
//             }

//             // increase first~
//             first++;
//             // remove duplicate processing~
//             while(first < n-2 && nums[first] == nums[first-1]) {
//                 first++;
//             }
//         }

//         return ans;
//     }
// };
