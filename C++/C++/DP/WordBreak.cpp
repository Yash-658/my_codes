// https://leetcode.com/problems/word-break/

// At each index:
// 👉 you generate all substrings starting there
// Total substrings in a string =
// O(n²)

// And each index is processed
// 👉 so total = O(n³) MORE OPTIMISED VERSION BELOW

// class Solution {
// public:
//     // memoization O(n^3)

//     bool isPossible(int start, const string &s, int n, vector<int> &ans, const unordered_set<string> &dict) {
//         // base case 
//         if(start == n) return true;

//         // check if we already computed with this as the start index~
//         if(ans[start] != -1) return ans[start];

//         string temp = "";
//         for(int curr = start; curr < n; curr++) {
//             temp.push_back(s[curr]);
//             if(dict.contains(temp) && isPossible(curr+1, s, n, ans, dict)) {
//                 return ans[start] = true;
//             }
//         }

//         return ans[start] = false;
//     }

//     bool wordBreak(string s, vector<string>& wordDict) {
//         int n = s.size();
//         unordered_set<string> dict;
//         vector<int> ans(n, -1);     // ans[i] will have 3 values, -1 if not computed, 0 if false, 1 if true

//         for(const string &str: wordDict) {
//             dict.insert(str);
//         }


//         return isPossible(0, s, n, ans, dict);
//     }
// };


//    ⭐⭐⭐ Memoization with max word optimization 👉 O(n × L²)
//     where L = max word length

// class Solution {
// public:

//     bool isPossible(int start, const string &s, int maxLength, vector<int> &ans, const unordered_set<string> &dict) {
//         // base case 
//         if(start == s.size()) return true;

//         // check if we already computed with this as the start index~
//         if(ans[start] != -1) return ans[start];

//         string temp = "";
//         for(int curr = start; curr < min(start+maxLength, (int)s.size()); curr++) {
//             temp.push_back(s[curr]);
//             if(dict.contains(temp) && isPossible(curr+1, s, maxLength, ans, dict)) {
//                 return ans[start] = true;
//             }
//         }

//         return ans[start] = false;
//     }

//     bool wordBreak(string s, vector<string>& wordDict) {
//         int n = s.size();
//         unordered_set<string> dict;
//         vector<int> ans(n, -1);     // ans[i] will have 3 values, -1 if not computed, 0 if false, 1 if true

//         int maxLength = 0;

//         for(const string &str: wordDict) {
//             maxLength = max(maxLength, (int)str.size());
//             dict.insert(str);
//         }

//         return isPossible(0, s, maxLength, ans, dict);
//     }
// };