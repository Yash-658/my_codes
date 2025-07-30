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

