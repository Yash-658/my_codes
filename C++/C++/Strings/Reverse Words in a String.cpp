// https://leetcode.com/problems/reverse-words-in-a-string/description/

// MOST OPTIMAL: TC: O(3n) SC: O(1)

// class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(), s.end());
//         int n = s.size(), i = 0, j = 0;

//         while(i < n) {
//             // skip spaces~
//             while(i < n && s[i] == ' ') {
//                 i++;
//             }

//             if(i >= n) break;

//             if (j != 0) {             // adding space before every word except first,
//                 s[j++] = ' ';
//             }
            
//             int start = j;

//             while(i < n && s[i] != ' ') {
//                 s[j++] = s[i++];
//             }

//             reverse(s.begin()+start, s.begin()+j);
//         }

//         s.resize(j);       // for removing those redundant spaces or chars
//         return s;
//     }
// };


// O(n) O(n) stack solution~

// class Solution {
// public:
//     string reverseWords(string s) {
//         int size = s.size();

//         stack<string> st;
//         string ans = "";
//         for(int i = 0; i < size; i++) {
//             if(s[i] != ' ') {
//                 string temp;
//                 while(i < size && s[i] != ' ') {
//                     temp.push_back(s[i]);
//                     i++;
//                 }
//                 st.push(temp);
//             }
//         }

//         while(!st.empty()) {
//             ans.append(st.top());
//             st.pop();
//             ans.push_back(' ');
//         }
//         ans.pop_back();    // to remove the last space~
//         return ans;
//     }
// };