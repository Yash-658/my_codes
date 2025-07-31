#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

template <typename T>
class graph {
    public:
    unordered_map<T, list<T>> adj;

    void addEge(T u, T v, bool directed) {
        // add u -> v
        adj[u].push_back(v);

        // if undirected, push v -> u too
        if(directed == 0) adj[v].push_back(u);
    }

    void printAdj() {
        for(const auto &i: adj) {
            cout<<i.first<<" -> ";

            for(const auto &j: i.second) {
                cout<<j<<", ";
            }cout<<endl;
        }
    }

};

int main(){
    graph<int> gh;
    gh.addEge(0, 1, 0);
    gh.addEge(0, 4, 0);
    gh.addEge(4, 3, 0);
    gh.addEge(3, 1, 0);
    gh.addEge(1, 2, 0);
    gh.addEge(3, 2, 0);

    gh.printAdj();
    return 0;
}

// BFS is different for different types of graphs, for example, for connected undirected and directed graphs 
// but for disconnected graphs, we will have to just add the extra funtionality to travel all the nodes atleast once

// This one works for connected directed and undirected graphs and Node 0 exists and is reachable to all
// 🔁 To make it general-purpose, loop through all nodes and run BFS from any unvisited node (i.e., handle disconnected components).

// #include<set>
// #include<map>

// vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
//     queue<int> q;
//     unordered_map<int,bool> visited;
//     vector<int> res;

//     q.push(0);
//     visited[0] = true;

//     while(!q.empty()) {
//         int temp = q.front();
//         q.pop();

//         res.push_back(temp);
//         for(const int &i: adj[temp]) {
//             if(!visited[i]) {
//                 q.push(i);
//                 visited[i] = true;
//             }
//         }
//     }

//     return res;
// }


// DFS for connected as well as disconnected directed(just a slight tweak in creating the adj list) and undirected graphs

// void DFS(int i, vector<vector<int>> &adj, unordered_map<int, bool> &visited,
//         vector<int> &temp) 
// {
//     // mark visited~
//     visited[i] = true;

//     // push i in temp~
//     temp.push_back(i);

//     // iterate to all the elements in the adjaceny list of i one-by-one
//     for(int j = 0; j < adj[i].size(); j++) {
//         if(!visited[adj[i][j]]) {
//             DFS(adj[i][j], adj, visited, temp);
//         }
//     }
// }

// void createAdj(vector<vector<int>> &adj, vector<vector<int>> &edges) {
//     for(const auto &pair: edges) {
//         adj[pair[0]].push_back(pair[1]);
//         adj[pair[1]].push_back(pair[0]);
//     }
// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//     vector<vector<int>> adj(V);
//     createAdj(adj, edges);
//     vector<vector<int>> res;
//     unordered_map<int, bool> visited;

//     //ensures even disconnected components are traversed
//     for(int i = 0; i < V; i++) {
//         if(!visited[i]) {
//             vector<int> temp;
//             DFS(i, adj, visited, temp);
//             res.push_back(temp);
//         }
//     }

//     return res;
// }