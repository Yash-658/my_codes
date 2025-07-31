#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

// https://www.naukri.com/code360/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM

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
