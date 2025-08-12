#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

// https://www.naukri.com/code360/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM

// THIS IS CLASSIC BFS APPROACH FOR CYCLE DETECTING
// if a node is already visited and it's not the parent node of the current node, then there's a cycle

// void createAdj(vector<vector<int>> &adj, vector<vector<int>> &edges) {
//     for(const auto &pair: edges) {
//         adj[pair[0]].push_back(pair[1]);
//         adj[pair[1]].push_back(pair[0]);
//     }
// }

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     vector<vector<int>> adj(n+1);
//     createAdj(adj, edges);

//     queue<int> q;
//     unordered_map<int,bool> visited;
//     unordered_map<int,int> child_parent;

//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {
//             q.push(i);
//             visited[i] = true;
//             child_parent[i] = -1;

//             while(!q.empty()) {
//                 int temp = q.front();
//                 q.pop();

//                 for(const int &i: adj[temp]) {
//                     if(visited[i] && child_parent[temp] != i) {
//                         return "Yes";
//                     }

//                     if(!visited[i]) {
//                         q.push(i);
//                         visited[i] = true;
//                         child_parent[i] = temp;
//                     }
//                 }
//             }
//         }
//     }
//     return "No";
// }


// THIS IS THE DFS APPROACH~

// void createAdj(vector<vector<int>> &adj, vector<vector<int>> &edges) {
//     for(const auto &pair: edges) {
//         adj[pair[0]].push_back(pair[1]);
//         adj[pair[1]].push_back(pair[0]);
//     }
// }

// bool isCycle(int i, vector<vector<int>> &adj, unordered_map<int,int> &visited,
// unordered_map<int,int> &child_parent) 
// {
//     visited[i] = true;

//     for(const auto &element: adj[i]) {
//         if(visited[element] && child_parent[i] != element) return true;
//         if(!visited[element]) {
//             child_parent[element] = i;
//             if(isCycle(element, adj, visited, child_parent)) return true;
//         }
//     }

//     return false;
// }

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     vector<vector<int>> adj(n+1);
//     createAdj(adj, edges);
//     unordered_map<int,int> child_parent; 
//     unordered_map<int,int> visited;

//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {
//             child_parent[i] = -1;
//             bool ans = isCycle(i, adj, visited, child_parent);
//             if(ans) return "Yes";
//         }
//     }
//     return "No";
// }
