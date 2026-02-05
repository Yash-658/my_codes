// most opitmal approach uses tortoise and hare method, 
// treat the array as a linked list with cycle and just detect the starting point of the cycle by floyd's cycle detection, that's our duplicate~

// TC: O(n) SC: O(1)

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow = nums[0], fast = nums[0];    // could have also initialised it with 0, but we know cycle will never start at 0th index so its okay~

//         do {
//         slow = nums[slow];
//         fast = nums[nums[fast]];
//         } while (slow != fast);

//         // found intersection, now start from first node~
//         fast = nums[0];

//         while(slow != fast) {
//             slow = nums[slow];
//             fast = nums[fast];
//         }

//         return slow;
//     }
// };