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

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     vector<vector<int>> adjList(n+1);

//     for(vector<int> &edge: edges) {
//         adjList[edge[0]].push_back(edge[1]);
//         adjList[edge[1]].push_back(edge[0]);
//     }

//     // graph can be disconnected~
//     // output as a string, "Yes", "No"

//     // bfs

//     vector<bool> visited(n+1, false);
//     vector<int> parent(n+1);
//     queue<int> q;
    
//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {
//             visited[i] = true;
//             parent[i] = -1;
//             q.push(i);
//             while(!q.empty()) {
//                 int curr = q.front();
//                 q.pop();

//                 for(int adj: adjList[curr]) {
//                     if(parent[curr] == adj) continue;
//                     if(visited[adj]) return "Yes";
//                     visited[adj] = true;
//                     parent[adj] = curr;
//                     q.push(adj);
//                 }
//             }
//         }
//     }
    
//     return "No";
// }


// THIS IS THE DFS APPROACH~

// bool dfs(int curr, const vector<vector<int>> &adjList, vector<int> &parent, vector<bool> &visited) {
//     if(visited[curr]) return true;

//     visited[curr] = true;

//     for(int adj: adjList[curr]) {
//         if(parent[curr] == adj) continue;

//         parent[adj] = curr;
//         if(dfs(adj, adjList, parent, visited)) {
//             return true;
//         }
//     }

//     return false;
// }

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     vector<vector<int>> adjList(n+1);

//     for(vector<int> &edge: edges) {
//         adjList[edge[0]].push_back(edge[1]);
//         adjList[edge[1]].push_back(edge[0]);
//     }

//     // graph can be disconnected~
//     // output as a string, "Yes", "No"

//     // dfs

//     vector<bool> visited(n+1, false);
//     vector<int> parent(n+1);
    
//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {
//             parent[i] = -1;
//             if(dfs(i, adjList, parent, visited)) return "Yes";
//         }
//     }
    
//     return "No";
// }
