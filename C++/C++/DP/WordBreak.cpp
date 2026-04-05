// https://leetcode.com/problems/word-break/

// At each index:
// 👉 you generate all substrings starting there
// Total substrings in a string =
// O(n²)

// And each index is processed
// 👉 so total = O(n³), can optimise a little more if we limit substring length using max word length present in the Dict~  then it will be O(n² * (max_word_length_in_dict))

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