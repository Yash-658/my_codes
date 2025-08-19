// Dijkstra's with set, we can also implement this with a priority queue~
// Dijkstra's algorithm works on both directed and undirected graphs, as long as all edge weights are non-negative.
// To find the actual path, we will have to maintain a parent[] array, whenever we will update the distance array for a node, we will update its parent~

// #include <bits/stdc++.h> 
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
//     vector<vector<pair<int, int>>> adj(vertices);
//     for(const auto &edge: vec) {
//         adj[edge[0]].push_back({edge[1], edge[2]});
//         adj[edge[1]].push_back({edge[0], edge[2]});
//     }

//     vector<int> distance(vertices, INT_MAX);      
//     distance[0] = 0;
//     set<pair<int, int>> distanceNode;
//     distanceNode.insert({0, 0});

//     while(!distanceNode.empty()) {
//         pair<int, int> top = *distanceNode.begin();
//         distanceNode.erase(distanceNode.begin());

//         // process for all its neighbours~
//         for(const auto &pair: adj[top.second]) {
//             int disFromSrc = top.first + pair.second;                       // total distance from source to the neighbour of top, through the top node
//             if(distance[pair.first] > disFromSrc) {
//                 // abh ise set mai insert kro, but insert krne se phele check if theres already a pair with this node in the set~
//                 auto temp = distanceNode.find({distance[pair.first], pair.first});
//                 if(temp != distanceNode.end()) distanceNode.erase(temp);
//                 distanceNode.insert({disFromSrc, pair.first});
//                 distance[pair.first] = disFromSrc;
//             }
//         }
//     }

//     return distance;
// }
