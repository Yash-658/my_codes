// https://www.youtube.com/watch?v=uRbJ1OF9aYM&t=21s
// https://leetcode.com/problems/find-eventual-safe-states/description/

// Your Approach, same TC and SC with the standard approach from DFS but uses some extra arrays~

// class Solution {
//     bool dfs(int node, vector<bool> &visited, vector<bool> &recStack, vector<bool> &safe, const vector<vector<int>>& graph) {
//         visited[node] = true;
//         recStack[node] = true;

//         for(int adj: graph[node]) {
//             if(visited[adj] && recStack[adj]) {
//                 // that means this node is part of a cycle, mark it as unsafe~
//                 safe[node] = false;
//                 return true;
//             }

//             if(!visited[adj]) {
//                 bool unsafe = dfs(adj, visited, recStack, safe, graph);
//                 if(unsafe) {
//                     safe[node] = false;
//                     return true;
//                 }
//             }
//         }

//         recStack[node] = false;             
//         return false;
//     }

// public:
//     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//         // if a node is part of a cycle or a path through that node leads to a cycle, its not a safe node~

//         vector<bool> safe(graph.size(), true);
//         vector<bool> visited(graph.size(), false);
//         vector<bool> recStack(graph.size(), false);

//         for(int i = 0; i < graph.size(); i++) {
//             if(!visited[i]) dfs(i, visited, recStack, safe, graph);
//         }

//         vector<int> safeNodes;
//         for(int i = 0; i < safe.size(); i++) {
//             if(safe[i]) safeNodes.push_back(i);
//         }

//         return safeNodes;
//     }
// };

// Standard Approach of DFS, Instead of 3 separate arrays (visited, recStack, safe), we compress everything into one array color[], it is not interviewer friendly~

// We can also do this using Kahn's Algo~
