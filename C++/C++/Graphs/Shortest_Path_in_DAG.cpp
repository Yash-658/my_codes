// SHORTEST PATH IN WEIGHTED DAG USING DFS, TOPOLOGICAL SORT


// class Solution {
//     void dfs(int i, const vector<vector<pair<int,int>>> &adj, vector<bool> &visited, stack<int> &s) {
//         for(const auto &list: adj[i]) {
//             if(!visited[list.first]) {
//                 visited[list.first] = true;
//                 dfs(list.first, adj, visited, s);
//             }
//         }
        
//         s.push(i);
//     }
    
//   public:
//     vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
//         vector<vector<pair<int,int>>> adj(V);
//         for(const auto &edge: edges) {
//             adj[edge[0]].push_back({edge[1], edge[2]});
//         }
        
//         vector<bool> visited(V);
//         stack<int> s;
        
//         // now prepare the topological sort~
//         for(int i = 0; i < V; i++) {
//             if(!visited[i]) {
//                 visited[i] = true;
//                 dfs(i, adj, visited, s);
//             }
//         }

//         vector<int> distance(V, -1);
//         distance[0] = 0;
//         while(!s.empty()) {
//             int top = s.top();
//             s.pop();
//             if(distance[top] != -1) {
//                 for(const auto &list: adj[top]) {
//                     int total = distance[top] + list.second;
//                     if(distance[list.first] == -1 || distance[list.first] > total) {
//                         distance[list.first] = total;
//                     }
//                 }
//             }
//         }
        
//         return distance;
//     }
// };
 