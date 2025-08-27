// https://leetcode.com/problems/word-ladder/
// main thing was the optimisation technique of storing patterns 

// class Solution {
// public:
//     int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//         // edge_case: check if endWord exists in wordList
//         if(find(wordList.begin(), wordList.end(), endWord) == wordList.end()) return 0;

//         // now for optimization, add words with patterns in a hashmap for constant lookup~
//         int L = beginWord.size();

//         unordered_map<string, vector<string>> patternMap;
//         for(const string &word: wordList) {
//             for(int i = 0; i < L; i++) {         // as all words are of same length~
//                 string pattern = word;
//                 pattern[i] = '*';  

//                 patternMap[pattern].push_back(word);
//             }
//         }

//         // starting BFS from beginWord
//         int layer = 1;
//         unordered_map<string, bool> visited;
//         queue<string> q;
//         q.push(beginWord);
//         visited[beginWord] = true;

//         while(!q.empty()) {
//             int size = q.size();
//             for(int i = 0; i < size; i++) {
//                 string temp = q.front();
//                 q.pop();

//                 // check if this is the endWord~
//                 if(temp == endWord) return layer;

//                 // now add next potential words of the transformation sequence~
//                 for(int j = 0; j < L; j++) {
//                     string pattern = temp;
//                     pattern[j] = '*';

//                     for(const string &str: patternMap[pattern]) {
//                         if(!visited[str]) {
//                             visited[str] = true;
//                             q.push(str);
//                         }
//                     }
//                 }
//             }

//             layer++;
//         }
//         return 0;
//     }
// };