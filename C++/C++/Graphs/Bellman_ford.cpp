// difference from dijkstra~
// 1) helps to detect negative cycles, -ve cycle is a cycle in which the sum of all edges of the cycle is -ve
// 2) also work with negative weights
// 3) bellman ford can only be applied to directed graphs, to apply it to an undirected graph we can easily convert the undirected to directed graph

// think, why "N-1" iterations? https://youtu.be/0vVofAhAYjc?si=nyjDN7eqXCHcjU-G&t=969
// also learn how to detect a -ve cycle from the same video

// User function Template for C++

// class Solution {
//   public:
//     vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
//         vector<int> distance(V, 1e8);
//         distance[src] = 0;
        
//         for(int i = 1; i < V; i++) {
//             for(const auto &edge: edges) {
//                 int u = edge[0];
//                 int v = edge[1];
//                 int wt = edge[2];
//                 if(distance[u] != 1e8 && distance[u] + wt < distance[v]) {
//                     distance[v] = distance[u] + wt;
//                 }
//             }
//         }
        
//         for(const auto &edge: edges) {
//                 int u = edge[0];
//                 int v = edge[1];
//                 int wt = edge[2];
//                 if(distance[u] != 1e8 && distance[u] + wt < distance[v]) {
//                     return {-1};
//                 }
//         }
        
//         return distance;
//     }
// };

// https://chatgpt.com/s/t_68a7fb07892881918d989c4d9c6eb913 (to print the negative cycle)