// https://leetcode.com/problems/permutation-sequence/

// Outer loop: O(n)
// Inner swaps: worst case O(n) per iteration
// 👉 Total: O(n²)

// technically, O(n³) as we compute factorial every loop
// ✔ Fix:
// Precompute factorials in array


// class Solution {
// public:
//     int factorial(int n) {
//         if(n == 0 || n == 1) return 1;
//         return n*factorial(n-1);
//     }

//     string getPermutation(int n, int k) {
//         k = k-1;
        
//         string ans;
//         for(char i = 1; i <= n; i++) ans.push_back(i + '0');

//         for(int i = 0; i < n; i++) {
//             int factor = factorial(n -(i+1));    // iterations after which ith index changes its elements in sorted order~
//             int changes = k/factor;
//             k = k%factor;

//             int temp = i+1;
//             while(changes > 0) {
//                 swap(ans[i], ans[temp++]);
//                 changes--;
//             }
//         }

//         return ans;
//     }
// };