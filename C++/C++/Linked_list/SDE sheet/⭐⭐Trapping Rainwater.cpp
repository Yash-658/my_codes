// https://leetcode.com/problems/trapping-rain-water/

// MOST OPTIMAL APPROACH~ TC: O(N) SC:O(1)

// Your thought process becomes:

// I know the tallest wall on the left.
// I know the tallest wall on the right.
// Whichever maximum is smaller limits the water.
// So I can safely process that side.

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         // MOST OPTIMAL (Intutive Two Pointer Approach)
//         int n = height.size();

//         int left = 0;
//         int right = n - 1;

//         int leftMax = 0;
//         int rightMax = 0;

//         int water = 0;

//         while (left <= right) {

//             leftMax = max(leftMax, height[left]);
//             rightMax = max(rightMax, height[right]);

//             if (leftMax < rightMax) {
//                 water += leftMax - height[left];
//                 left++;
//             }
//             else {
//                 water += rightMax - height[right];
//                 right--;
//             }
//         }

//         return water;
//     }
// };

// ANOTHER APPROACH~ TC: O(N) SC: O(N)
/*
class Solution {
public:
    int trap(vector<int>& height) {
        // TC: O(n) SC: O(n)

        // make two vectors consisting of the max elevation till ith index from the left and from the right~
        int currMax = 0, n = height.size();
        vector<int> prefixMax(n), suffixMax(n);

        for(int i = 0; i < n; i++) {
            prefixMax[i] = currMax;
            if(height[i] > currMax) currMax = height[i];
        }

        currMax = 0;
        for(int i = n-1; i >= 0; i--) {
            suffixMax[i] = currMax;
            if(height[i] > currMax) currMax = height[i];
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(height[i] >= suffixMax[i] || height[i] >= prefixMax[i]) continue;
            ans += min(suffixMax[i], prefixMax[i]) - height[i];
        }

        return ans;
    }
};
*/

