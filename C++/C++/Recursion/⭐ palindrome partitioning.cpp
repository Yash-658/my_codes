// https://leetcode.com/problems/palindrome-partitioning/submissions/1963099564/

// Number of partitions ≈ 2^(n-1)
// For each partition:
// You check palindrome → O(n)
// Overall:
// Time Complexity = O(n * 2^n)

// ⭐ here bottleneck is checking palindrome each time, it can be optimised by using DP tho (check this later)

// class Solution {
// public:
//     bool isPalindrome(int start, int end, const string &s) {
//         int i = start, j = end;
//         while(i < j) {
//             if(s[i] != s[j]) {
//                 return false;
//             }
//             i++;
//             j--;
//         }

//         return true;
//     }

//     void solve(int ind, const string &s, vector<string> &temp, vector<vector<string>> &ans) {
//         // base case~
//         if(ind >= s.size()) {
//             ans.push_back(temp);
//             return;
//         }

//         for(int i = ind; i < s.size(); i++) {
//             // check if substr from last to ind is a palindrome~
//             if(isPalindrome(ind, i, s)) {
//                 temp.push_back(s.substr(ind, i-ind+1));
//                 solve(i+1, s, temp, ans);
//                 temp.pop_back();
//             }
//         }
//     }

//     vector<vector<string>> partition(string s) {
//         vector<vector<string>> ans;
//         vector<string> temp;

//         solve(0, s, temp, ans);  // here ind denotes the current index after where you're exploring partitions
//         return ans;
//     }
// };