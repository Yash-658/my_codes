// https://www.naukri.com/code360/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// Topological sort can only be applied to DAG(Directed Acyclic Graph)

// THIS IS BY DFS~

// void DFS(int i, const vector<vector<int>> &adj, vector<bool> &visited, stack<int> &ans) {
//     visited[i] = true;

//     for(const auto &j: adj[i]) {
//         if(!visited[j]) DFS(j, adj, visited, ans);
//     }

//     ans.push(i);
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//     stack<int> ans;
//     vector<int> res;
//     vector<bool> visited(v);

//     vector<vector<int>> adj(v);
//     for(const auto &i: edges) {
//         adj[i[0]].push_back(i[1]);
//     }

//     for(int i = 0; i < v; i++) {
//         if(!visited[i]) DFS(i, adj, visited, ans);
//     }

//     while(!ans.empty()) {
//         res.push_back(ans.top());
//         ans.pop();
//     }

//     return res;
// }

// Topological Sort ( Using Kahn's Algorithm or BFS)

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//     vector<int> ans;
//     vector<int> inDegree(v, 0);

//     vector<vector<int>> adj(v);
//     for(const auto &i: edges) {
//         adj[i[0]].push_back(i[1]);
//         inDegree[i[1]]++;
//     }

//     queue<int> q;

//     // push all elements with inDegree 0~
//     for(int i = 0; i < v; i++) {
//         if(inDegree[i] == 0) q.push(i);
//     }

//     while(!q.empty()) {
//         int temp = q.front();
//         q.pop();

//         ans.push_back(temp);
//         for(const auto &i: adj[temp]) {
//             inDegree[i]--;
//             if(inDegree[i] == 0) {
//                 q.push(i);
//             }
//         }
//     }

//     return ans;
// }  

// BTW, add this in the kahn's algo to detect if there's a cycle in the graph~
// if (ans.size() < v) {
//     // Cycle detected
// }
