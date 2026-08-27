// https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/description/?envType=daily-question&envId=2026-08-27

// class Solution {
// public:
//     // if no changed char in target, return next permutation of target if it exists~
//     // if change in char of target, try to find a char which is greater than the first changed char in target,
//     // if found, replace it with it and then put all remanining char in ascending order,
//     // if not found, backtrack and shit till you can else return empty~

//     string lexGreaterPermutation(string s, string target) {
//         int n = target.size();
        
//         vector<int> charfreq(26, 0);

//         for(char ch: s) {
//             charfreq[ch-'a']++;
//         }

//         int i = 0;
//         while(i < n) {
//             if(charfreq[target[i] -'a'] > 0) {
//                 charfreq[target[i] - 'a']--;
//                 i++;
//             }

//             else break;
//         }

//         if(i < n) {
//             // chars differ
//             string ans = target.substr(0, i);
            
//             // find a char in s that is left and is just greater than target[i], if it doesn't exist, backtrack and check for a previously matched char~

//             int j = 0;
//             while(i >= 0) {
//                 j = 0;
//                 while(j < 26) {
//                     if(charfreq[j] > 0 && j + 'a' > target[i]) {
//                         break;
//                     }
//                     j++;
//                 }

//                 if(j != 26) break;    // we found a char greater than target[i] from s's char~
//                 i--;
//                 if(i >= 0) charfreq[target[i] - 'a']++;
//             }
//             if(i < 0) return "";
//             ans = target.substr(0, i);

//             j = 0;
//             while(j < 26) {
//                 if(charfreq[j] > 0 && j + 'a' > target[i]) {
//                     break;
//                 }
//                 j++;
//             }

//             ans.push_back(j + 'a');
//             charfreq[j]--;

//             for(int k = 0; k < 26; k++) {
//                 while(charfreq[k] > 0) {
//                     ans.push_back(k + 'a');
//                     charfreq[k]--;
//                 }
//             }

//             return ans;
//         }

//         else {
//             // find and return next permutation if it exists as no char differ~
//             if(!next_permutation(target.begin(), target.end())) return "";
//             return target;
//         }
//     }
// };