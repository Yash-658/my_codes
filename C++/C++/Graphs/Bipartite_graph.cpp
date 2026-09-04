// https://youtu.be/-vu34sct1g8?si=DSWSFcKhq07hrBWM
// https://leetcode.com/problems/is-graph-bipartite/description/

// Bipartite graph: if we can color the graph with 2 colors such that no adjancent node have same color~

// Equivalent definitions of a bipartite graph:

// 1. There is no cycle of odd length

// 2. we can split the nodes of the graph
//    (vertex set of the graph) into 2 subsets so
//    that there is all the edges go from 1 subset
//    to the other subset, and there's no edge between the vertices of same set~

// class Solution {                                         // our approach indirectly checks if graph contains an odd-length cycle~ 
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         vector<int> color(graph.size(), -1);

//         queue<int> q;

//         for(int i = 0; i < graph.size(); i++) {
//             if(color[i] == -1) {
//                 color[i] = 0;
//                 q.push(i);

//                 while(!q.empty()) {
//                     int temp = q.front();
//                     q.pop();

//                     for(int adj: graph[temp]) {
//                         if(color[adj] != -1) {  // if adj is already visited, check if its the right color
//                             if(color[adj] == color[temp]) return false;
//                         }

//                         else {
//                             // if adj is uncolored, color it with the opposite color~
//                             color[adj] = (color[temp] == 0 ? 1 : 0);
//                             q.push(adj);
//                         }
//                     }
//                 }
//             }
//         }

//         return true;
//     }
// };