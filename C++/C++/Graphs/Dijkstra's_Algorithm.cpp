// Dijkstra's with set, we can also implement this with a priority queue~
// Dijkstra's algorithm works on both directed and undirected graphs, as long as all edge weights are non-negative.
// To find the actual path, we will have to maintain a parent[] array, whenever we will update the distance array for a node, we will update its parent~

// TC: O((V + E) log V)

// class Solution {
//   public:
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         vector<vector<pair<int,int>>> adjList(V);
//         for(auto &edge: edges) {
//             adjList[edge[0]].push_back({edge[1], edge[2]});
//             adjList[edge[1]].push_back({edge[0], edge[2]});
//         }
        
//         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
//         vector<int> ans(V, INT_MAX);
//         ans[src] = 0;
//         minHeap.push({0, src});
        
//         while(!minHeap.empty()) {
//             auto [dis, node] = minHeap.top();
//             minHeap.pop();
            
//             if(dis > ans[node]) {            // for stale entries~
//                 continue;
//             }
            
//             for(auto [adj, adjDis]: adjList[node]) {
//                 int disFromSrc = dis + adjDis;
//                 if(disFromSrc < ans[adj]) {
//                     ans[adj] = disFromSrc;
//                     minHeap.push({disFromSrc, adj});
//                 }
//             }
//         }
        
//         return ans;
//     }
// };
