// https://leetcode.com/problems/trapping-rain-water/

// MOST OPTIMAL APPROACH~ TC: O(N) SC:O(1)
// understand why do we calculate the smaller level first in this approach ( if(l<r) we process l and vice versa )

// kyuki ussi se apn conclude kr pa rhe bina exactly rightMax 

// int trap(vector<int>& height) {
//         // TC: O(n) SC: O(1)

//         int ans = 0, l = 0, r = height.size() - 1, leftMax = 0, rightMax = 0;
        
//         while(l < r) {
//             if(height[l] < height[r]) {
//                 // left process kro phele~
//                 if(height[l] >= leftMax) leftMax = height[l];
//                 else{
//                     ans += leftMax - height[l];
//                 }

//                 l++;
//             }

//             else{
//                 //right process kro 
//                 if(height[r] >= rightMax) rightMax = height[r];
//                 else{
//                     ans += rightMax - height[r];
//                 }

//                 r--;
//             }
//         }

//         return ans;
// }

// BETTER APPROACH~ TC: O(N) SC: O(N)
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

