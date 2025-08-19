// Total Time Complexity: O(ElogE)
// https://www.geeksforgeeks.org/problems/minimum-spanning-tree-kruskals-algorithm/1
// ✅ Best when:

// The graph is sparse (E closer to V).
// Edges are easier to sort/store.
// You want an edge-based algorithm.


// class Greater {
//     public:
//     bool operator() (const vector<int> &a, const vector<int> &b) {
//         return a[2] > b[2];
//     }
// };

// class DisjointSet {
//     vector<int> rank, parent;
// public:
//     DisjointSet(int n) {
//         rank.resize(n+1, 0);
//         parent.resize(n+1);

//         for(int i = 0; i <= n; i++) {
//             parent[i] = i;
//         }
//     }

//     int findUPar(int node) {
//         if(node == parent[node]) {
//             return node;
//         }
//         return parent[node] = findUPar(parent[node]);     // path compression~
//     }

//     // UNION BY RANK
//     void unionByRank(int u, int v) {
//         int Ult_u = findUPar(u);                         // find ultimate parent of both u and v
//         int Ult_v = findUPar(v);

//         if(Ult_u == Ult_v) return;                       // if they belong to the same component, we don't have to do anything

//         int rankU = rank[Ult_u];                         // find rank of ultimate parent of both u and v
//         int rankV = rank[Ult_v];                         

//         if(rankU == rankV) {                                
//             // can add any one to anyone as ranks are equal~
//             parent[Ult_u] = Ult_v;
//             rank[Ult_v]++;
//         }

//         else if(rankU > rankV) {
//             parent[Ult_v] = Ult_u;
//         }

//         else {
//             parent[Ult_u] = Ult_v;
//         }
//     }
// };

// class Solution {
//   public:
//     int kruskalsMST(int V, vector<vector<int>> &edges) {
//         int sum = 0;
//         sort(edges.begin(), edges.end(), Greater());
//         DisjointSet Ds(V);
        
        
//         for(const auto &temp: edges) {
//             if(Ds.findUPar(temp[0]) == Ds.findUPar(temp[1])) continue;
//             Ds.unionByRank(temp[0], temp[1]);
//             sum += temp[2];
//         }
        
//         return sum;
//     }
// };

// Kruskal’s works because it picks the globally smallest edge each time, 
// and by the cut property, any such edge that doesn’t form a cycle is always safe to add to the MST.

