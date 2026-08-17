// class Solution {
// public:
//     string frequencySort(string s) {
//         int n = s.size();
//         vector<vector<char>> buckets(n+1);
//         unordered_map<char, int> charMap;

//         for(char ch: s) {
//             charMap[ch]++;
//         }

//         for(const auto &map: charMap) {
//             buckets[map.second].push_back(map.first);
//         }

//         int curr = 0;
//         for(int i = n; i > 0; i--) {
//             for(auto chars: buckets[i]) {
//                 for(int j = 0; j < i; j++) {
//                     s[curr++] = chars;
//                 }
//             }
//         }

//         return s;
//     }
// };