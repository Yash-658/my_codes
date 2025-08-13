// MST(Minimum Spanning Tree) is a Spanning Tree which uses cheapest set of weights of edges(sum of all weights is minm)~
// Spanning Tree: It's a tree which: 1) uses exactly "n-1" edges (if you have "n" nodes)
//                                   2) each node is reachable by every other node

// OR
// Spanning Tree is a subgraph of a graph with same set of vertices but with a subset of edges with size |V|-1



// INTUTION: Grow the tree from one node, always add the smallest edge that expands the tree without forming a cycle. (we check the "not forming a cycle" part by making the visited[])
// YOU CAN MODIFY IT A LITTLE IF YOU WANT MST~  (This gives the sum of all weights of the resulting MST), prims is a greedy algo

// #include<queue>

// class Solution {
//   public:
//     int spanningTree(int V, vector<vector<int>>& edges) {
//         // make adj list~
//         vector<vector<pair<int,int>>> adj(V);
//         for(const auto &edge: edges) {
//             adj[edge[0]].push_back({edge[1], edge[2]});
//             adj[edge[1]].push_back({edge[0], edge[2]});
//         }
        
//         vector<bool> visited(V, false);
//         int sum = 0;
//         priority_queue <pair<int, int>,
//             vector<pair<int, int>>,
//             greater<pair<int, int>>> minHeap;

//         minHeap.push({0, 0});
//         while(!minHeap.empty()) {
//             pair<int, int> temp = minHeap.top();
//             minHeap.pop();

//             if(visited[temp.second]) continue;

//             visited[temp.second] = true;
//             sum += temp.first;
//             for(const auto &edge: adj[temp.second]) {
//                 if(!visited[edge.first]) {
//                     minHeap.push({edge.second, edge.first});
//                 }
//             }
//         }

//         return sum;
//     }
// };
