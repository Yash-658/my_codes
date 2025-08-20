// A bridge (also called a cut-edge) in a graph is:
// 👉 An edge whose removal increases the number of components in the graph.
// Equivalently, it’s an edge that does not lie on any cycle (because if it were on a cycle, removing it would still leave another path between its endpoints).

// Tarjan's Algo:
// https://youtu.be/qrAub5z8FeA?si=IzwDmpXf2ApoA3t2
// https://leetcode.com/problems/critical-connections-in-a-network/

// class Solution {
// private:
// int timer = 1;

// void dfs(int node, int parent, vector<int> &tin, vector<int> &low,
//  vector<bool> &visited,
//  const vector<vector<int>> &adj, 
//  vector<vector<int>> &bridges) {

//     // mark node as visted~
//     visited[node] = true;
//     tin[node] = low[node] = timer;
//     timer++;        // updating timer

//     for(auto &it: adj[node]) {
//         if(it == parent) continue;

//         if(visited[it]) {
//             low[node] = min(low[node], low[it]);
//         }

//         else {
//             dfs(it, node, tin, low, visited, adj, bridges);
//             low[node] = min(low[node], low[it]);

//             // check if this connection is vulnerable~
//             if(low[it] > tin[node]) {
//                 bridges.push_back({it, node});
//             }
//         }
//     }
// }

// public:
//     vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
//         vector<vector<int>> adj(n);
//         for(const auto &it: connections) {
//             adj[it[0]].push_back(it[1]);
//             adj[it[1]].push_back(it[0]);
//         }

//         vector<bool> visited(n, false);
//         vector<int> tin(n), low(n);

//         vector<vector<int>> bridges;
//         dfs(0, -1, tin, low, visited, adj, bridges);
//         return bridges;
//     }
// };