// https://www.youtube.com/watch?v=2gtg3VsDGyc&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=25

// #include<map>
// #include<queue>

// class Solution {
//   public:
//     string findOrder(vector<string> &words) {
//         unordered_set<char> unique_letter;
//         unordered_map<char, vector<char>> adj;
//         unordered_map<char, int> inDegree;
        
//         for(auto &word: words) {
//             for(char ch: word) {
//                 unique_letter.insert(ch);
//                 inDegree[ch] = 0;
//             }
//         }
        
//         for(int i = 0; i < words.size()-1; i++) {
//             string firstW = words[i], secondW = words[i+1];
            
//             // checking if theres a case of invalid dict. as input, for ex: abc ab                  
//             if(firstW.size() > secondW.size() && firstW.substr(0, secondW.size()) == secondW) return "";
            
//             int j = 0;
//             while(j < firstW.size() && j < secondW.size()) {
                
//                 if(firstW[j] == secondW[j]) j++;
//                 else {
//                     adj[firstW[j]].push_back(secondW[j]);
//                     inDegree[secondW[j]]++;
//                     break;
//                 }
//             }
//         }
        
//         // now run topo sort, so first put all the chars with indegree == 0
//         queue<char> q;
//         string order = "";
//         for(const auto &pair: inDegree) {
//             if(pair.second == 0) q.push(pair.first);
//         }
            
//         while(!q.empty()) {
//             char temp = q.front();
//             q.pop();
                
//             order.push_back(temp);
//             for(int i: adj[temp]) {
//                 inDegree[i]--;
//                 if(inDegree[i] == 0) {
//                     q.push(i);
//                 }
//             }
//         }
            
//         if(order.size() < unique_letter.size()) return "";
//         return order;
//     }
// };

// Handling Invalid Case (Prefix Problem)

// If one word is longer but starts with the other word, that’s invalid.
// 👉 Example:
// ["abc", "ab"]  → invalid

// Because "ab" should come before "abc", but it doesn’t.

// So we check:
// If word1.size() > word2.size() and word1 starts with word2 → return "".