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