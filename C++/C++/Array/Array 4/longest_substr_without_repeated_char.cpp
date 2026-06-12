// https://leetcode.com/problems/longest-substring-without-repeating-characters/

// TC: O(n)    SC: O(1)   [as at most there will be 128 or 256 asci char so hashmap memory can be neglected, we can also use a vector of size 256]

// SLIDING WINDOW APPROACH~

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int ans = 0;
//         int left = 0;  // left pointer = start of current window
        
//         unordered_map<char, int> lastSeen;  // stores last index of each character
        
//         for(int right = 0; right < s.length(); right++) {
//             char curr = s[right];
            
//             // If character is already seen AND lies inside current window,
//             // move left pointer just after its previous occurrence
//             if(lastSeen.contains(curr) && lastSeen[curr] >= left) {
//                 left = lastSeen[curr] + 1;
//             }
            
//             // Update last seen index of current character
//             lastSeen[curr] = right;
            
//             // Window size = right - left + 1
//             ans = max(ans, right - left + 1);
//         }
        
//         return ans;  // maximum length of substring without repeating characters
//     }
// };