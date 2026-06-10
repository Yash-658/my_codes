// https://leetcode.com/problems/longest-common-prefix/

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         // if any string is empty, LCP will be ""
//         int minLen = INT_MAX;
//         string ans;
//         for(const string& str : strs) {
//             int currSize = str.size();
//             if(currSize == 0) return "";
//             if(currSize < minLen) {
//                 ans = str;
//                 minLen = currSize;
//             }
//         }

//         // take the smallest string as ans, and start comparing~
//         for(const string& str : strs) {
//             for(int i = 0; i < ans.size(); i++) {      // ans.size() chlaya cuz hr baar size km hote ja rha
//                 if(ans[i] != str[i]) {
//                     ans.resize(i);            // resize() is more efficient that .substr() as it doesn't create a new str
//                     break;
//                 }
//             }
//         }

//         return ans;
//     }
// };