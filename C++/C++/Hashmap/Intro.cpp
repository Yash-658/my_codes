// Ordered map uses a red-black tree (type of a self balancing BST) to give O(logn) TCs for insertion, deletion and searching~
// Unordered map uses hash-table and have amortized TC of O(1) and a worst case O(n) in insertion, deletion, searching etc

// when we try to access a key which doesn't exist in the map with [], it creates the respective key with default value "0"~
// but when we try to access the unexisting key with ".at()", it gives an exception~

// count() fxn is used to check if a given key exists or not, returns 1 if present and 0 if absent
// erase() to delete a pair by its "key"

// Revise Hashing -> hash fxns -> hash code, compression fxn
//                -> collision handling techniques (https://chatgpt.com/share/68861307-9edc-8005-9239-71c09d583b41)
//                -> load factor  (usually set to atleast 0.7)


#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> map;
    pair<string, int> temp = {"yash", 10};
    map.insert(temp);
    map["aryan"] = 7;
    map.insert({"vivek", 4});

    unordered_map<string, int> :: iterator it = map.begin();        
    while(it != map.end()) {                                    // to traverse the whole map: we can either use for(auto i: map)
        cout<<it->first<<" "<<it->second<<endl;                 // OR we can use a iterator~
        it++;
    }

return 0;
}