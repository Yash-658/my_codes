// https://leetcode.com/problems/roman-to-integer/

// class Solution {
// public:
//     int romanToInt(string s) {
//         int ans = 0, i = 0, n = s.size();
//         unordered_map<char, int> mapping = { {'I',1}, {'V', 5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000} };
 
//         while(i < n) {
//             int currVal = mapping[s[i]];
//             if(i+1 < n && currVal < mapping[s[i+1]]) {
//                 ans += (mapping[s[i+1]] - currVal);
//                 i++;
//             }

//             else ans += currVal;
//             i++;
//         }

//         return ans;
//     }
};