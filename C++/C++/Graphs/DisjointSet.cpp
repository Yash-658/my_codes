// Disjoint Set are used in dynamic graphs (used to tell if two nodes are in the same component in constant time)
// https://youtu.be/aBxjDBC4M1U?si=SDwxUc3-GtQRTqog

/*
Path Compression: Makes findUPar() very fast (almost O(1) amortized).
Union by Size/Rank: Keeps tree shallow → speeds up further operations.
DSU is great for dynamic connectivity problems (like Kruskal's MST).

“With union by rank and path compression, both find and union run in amortized O(α(n)) time, where 𝛼
is the inverse Ackermann function. That’s the tight bound proved by Tarjan in 1975, and since
α(n)≤4 for all practical n, it’s effectively constant in real-world usage.”
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class DisjointSet {
    vector<int> rank, size, parent;
public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        parent.resize(n+1);

        for(int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUPar(int node) {
        if(node == parent[node]) {
            return node;
        }
        return parent[node] = findUPar(parent[node]);     // path compression~
    }

    // UNION BY RANK
    void unionByRank(int u, int v) {
        int Ult_u = findUPar(u);                         // find ultimate parent of both u and v
        int Ult_v = findUPar(v);

        if(Ult_u == Ult_v) return;                       // if they belong to the same component, we don't have to do anything

        int rankU = rank[Ult_u];                         // find rank of ultimate parent of both u and v
        int rankV = rank[Ult_v];                         

        if(rankU == rankV) {                                
            // can add any one to anyone as ranks are equal~   (when two nodes of same rank are joined, rank increases~)
            parent[Ult_u] = Ult_v;
            rank[Ult_v]++;
        }

        else if(rankU > rankV) {
            parent[Ult_v] = Ult_u;
        }

        else {
            parent[Ult_u] = Ult_v;
        }
    }

    // UNION BY SIZE
    void unionBySize(int u, int v) {
        int Ult_u = findUPar(u);                         // find ultimate parent of both u and v
        int Ult_v = findUPar(v);

        if(Ult_u == Ult_v) return;                       // if they belong to the same component, we don't have to do anything

        if(size[Ult_u] > size[Ult_v]) {                                
            // add smaller component to bigger~
            parent[Ult_v] = Ult_u;
            size[Ult_u] += size[Ult_v];
        }

        else {
            parent[Ult_u] = Ult_v;
            size[Ult_v] += size[Ult_u];
        }
    }
};

int main()
{
    DisjointSet Ds(7);
    Ds.unionBySize(1, 2);
    Ds.unionBySize(2, 3);
    Ds.unionBySize(4, 5);
    Ds.unionBySize(6, 7);
    Ds.unionBySize(5, 6);

    if(Ds.findUPar(3) == Ds.findUPar(7)) cout<<"Same Component of 3 and 7"<<endl;           // if Ult parent of both nodes are same, they are in the same Component
    else cout<<"Different Component of 3 and 7"<<endl;
    if(Ds.findUPar(5) == Ds.findUPar(7)) cout<<"Same Component of 5 and 7"<<endl;
    else cout<<"Different Component of 5 and 7"<<endl;

    return 0;
}