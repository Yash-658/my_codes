// Articulation Points: Nodes on whose removal, the graph breaks into multiple components

// using tarjan's algo that we used to find bridges in a graph with a slight twist~
// tin[] = DFS time insertion, low[] = min time insertion of all adjacent nodes apart from parent and visited nodes

// https://www.youtube.com/watch?v=j1QDfU21iZk
// https://www.geeksforgeeks.org/problems/articulation-point-1/1

// class Solution {
// private:
//     int timer = 1;
    
//     void DFS(int node, int parent, vector<bool> &visited, vector<int> &mark,
//     vector<int> &tin, vector<int> &low, const vector<int> adj[]) {
//         visited[node] = true;
//         tin[node] = low[node] = timer;
//         timer++;
        
//         int child = 0;
//         for(const auto it: adj[node]) {
//             if(it == parent) continue;
            
//             if(visited[it]) low[node] = min(low[node], tin[it]);             // think why we are taking tin[it] and not low[it] like we did for bridges?  https://youtu.be/j1QDfU21iZk?si=SGPn_Lu5x7laWf3o&t=574
//             else {
//                 DFS(it, node, visited, mark, tin, low, adj);
//                 low[node] = min(low[node], low[it]);
                
//                 if(low[it] >= tin[node] && parent != -1) {
//                     mark[node] = 1;
//                 }
//                 child++;
//             }
//         }
        
//         if(child > 1 && parent == -1) mark[node] = 1;
//     }
    
//   public:
//     vector<int> articulationPoints(int V, vector<int> adj[]) {
//         vector<bool> visited(V, false);
//         vector<int> low(V), tin(V);
        
//         vector<int> mark(V);
        
//         DFS(0, -1, visited, mark, tin, low, adj);
        
//         vector<int> res;
        
//         for(int i = 0; i < V; i++) {
//             if(mark[i] == 1) res.push_back(i);
//         }
        
//         if(res.size() == 0) res.push_back(-1);
//         return res;
//     }
// };