// SCC's are only valid for directed graphs
// https://youtu.be/R6uoSjZ2imo?si=Fu48sG1H4t8Mx-Qv

// KOSARAJU's ALGO

// A Strongly Connected Component (SCC) in a directed graph is a maximal group of vertices such that:
// 👉 Every vertex in the group is reachable from every other vertex in the group.

// In simpler words:
// If you pick any two vertices u and v inside the same SCC, you can always find a directed path from u to v and from v to u.
// “Maximal” means you can’t add any extra vertex into the group without breaking this property.

// class Solution {
//     void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &s) {
//         visited[node] = true;
        
//         for(const int it: adj[node]) {
//             if(!visited[it]) dfs(it, adj, visited, s);
//         }
        
//         s.push(node);
//     }
    
//     void count(int node, vector<vector<int>> &rev_adj, vector<bool> &visited) {
//         visited[node] = true;
        
//         for(const int it: rev_adj[node]) {
//             if(!visited[it]) count(it, rev_adj, visited);
//         }
//     }
    
//   public:
//     int kosaraju(vector<vector<int>> &adj) {
//         int ans = 0;
        
//         stack<int> s;           // will store sorted nodes according to finishing time~
//         vector<bool> visited(adj.size(), false);
//         for(int i = 0; i < adj.size(); i++) {
//             if(!visited[i]) dfs(i, adj, visited, s);
//         }
        
//         vector<vector<int>> rev_adj(adj.size());
        
//         // now reversing the graph~
//         for(int i = 0; i < adj.size(); i++) {
//             for(auto it: adj[i]) {
//                 rev_adj[it].push_back(i);
//             }
//         }
        
//         // reset visited
//         for(int i = 0; i < visited.size(); i++) {
//             visited[i] = false;
//         }
        
//         // do dfs and count no. of SCC
//         while(!s.empty()) {
//             int temp = s.top();
//             s.pop();
            
//             if(!visited[temp]) {
//                 ans++;
//                 count(temp, rev_adj, visited);
//             }
//         }
        
//         return ans;
//     }
// };

// a little explanation as to why we sort nodes on finishing time first
// https://chatgpt.com/s/t_68a80744be908191ac637410bb41acd9