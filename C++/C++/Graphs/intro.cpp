#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph {
    public:
    unordered_map<int, list<int>> adj;

    void addEge(int u, int v, bool directed) {
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
    graph gh;
    gh.addEge(0, 1, 0);
    gh.addEge(0, 4, 0);
    gh.addEge(4, 3, 0);
    gh.addEge(3, 1, 0);
    gh.addEge(1, 2, 0);
    gh.addEge(3, 2, 0);

    gh.printAdj();
return 0;
}

