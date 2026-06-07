// https://leetcode.com/problems/longest-palindromic-substring/submissions/2025218180/


// (NOT IMPORTANT AT ALL) there exists a more OPTIMIZED VERSION: Manacher's Algorithm O(n) O(1)
// (can also be done thru dp, O(n^2) O(n^2) but my below optimized version is better)

// INTUTION: Every palindrome is defined by its center. Instead of checking every substring, 
// treat each index (and each gap between indices) as a center and expand outward while the characters match.
// The longest expansion across all centers is the answer.

// OPTIMIZED O(N^2) O(1)

// class Solution {
// public:
//     void expand(int left, int right, string &s, int &start, int &maxLen) {
//         int n = s.size();

//         while (left >= 0 && right < n && s[left] == s[right]) {
//             left--;
//             right++;
//         }

//         // palindrome is from left+1 to right-1
//         int currLen = right - left - 1;

//         if (currLen > maxLen) {
//             maxLen = currLen;
//             start = left + 1;
//         }
//     }

//     string longestPalindrome(string s) {
//         int n = s.size();

//         int start = 0;
//         int maxLen = 1;

//         for (int i = 0; i < n; i++) {
//             expand(i, i, s, start, maxLen);       // odd length
//             expand(i, i + 1, s, start, maxLen);   // even length
//         }

//         return s.substr(start, maxLen);
//     }
// };

// brute force O(n^3) O(1)

// class Solution {
// public:
//     string longestPalindrome(string s) {
//         string ans;
//         int n = s.size();
//         for(int i = 0; i < n; i++) {
//             string temp;
//             for(int j = i; j < n; j++) {
//                 temp.push_back(s[j]);
//                 // check if palindrome, if valid, check if new ans~
//                 int low = 0, high = temp.size()-1;
//                 bool isValid = true;
//                 while(low < high) {
//                     if(temp[low++] != temp[high--]) {
//                         isValid = false;
//                         break;
//                     }
//                 }

//                 if(isValid && temp.size() > ans.size()) {
//                     ans = temp;
//                 }
//             }
//         }

//         return ans;
//     }
// };