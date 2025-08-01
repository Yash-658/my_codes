// DFS APPROACH~
// Time Complexity: O(V + E)
// Space Complexity: O(V + E)

// #include<unordered_map>
// #include<vector>

// bool isCycle(int i, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &recStack) {
//   // mark visited and in recStack
//   visited[i] = true;
//   recStack[i] = true;

//   // for each non-visited outgoing edge from this node, run the isCycle fxn~
//   for(int j = 0; j < adj[i].size(); j++) {
//     int node = adj[i][j];
//     if(visited[node] && recStack[node]) return true;
//     if(!visited[node]) {
//       if(isCycle(node, adj, visited, recStack)) return true;
//     }
//   }

//   recStack[i] = false;
//   return false;
// }

// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//   vector<bool> visited(n+1, false);
//   vector<bool> recStack(n+1, false);

//   vector<vector<int>> adj(n+1);

//   // creating adj lsit
//   for(const auto &i: edges) {
//     adj[i.first].push_back(i.second);
//   }
  
//   for(int i = 1; i <=n; i++) {
//     if(!visited[i]) {
//       if(isCycle(i, adj, visited, recStack)) return 1;
//     }
//   }

//   return 0;
// }