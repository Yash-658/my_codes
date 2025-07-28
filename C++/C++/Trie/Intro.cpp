#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// ALSO KNOWN AS PREFIX TREE

// INSERTION, SEARCHING, DELETION   TC: O(L)  L: length of word~

class TrieNode {
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char data) {
            this->data = data;
            for(int i = 0; i < 26; i++) children[i] = nullptr;
            isTerminal = false;
        }

        ~TrieNode() {
            for (int i = 0; i < 26; i++) {
                if (children[i]) {
                    delete children[i];
                }
            }
        }
};

class Trie {
    private:
    void removeUtil(TrieNode* root, const string &word, int i) {              
        // base case
        if(i == word.size()) {
            root->isTerminal = false;
            return;
        }

        int index = word[i] - 'A';
        TrieNode* child = root->children[index];
        if(!child) {  // this char is absent~
            return;
        }

        // recursive call 
        removeUtil(child, word, i+1);

        // After recursion, check if child is useless now~
        if(!child->isTerminal && isEmpty(child)) {
            delete child;
            root->children[index] = nullptr;
        }
    }

    // Helper: returns true if node has no children
    bool isEmpty(TrieNode* node) {                              // its used for deleting useless nodes~
        for (int i = 0; i < 26; i++) {
            if (node->children[i] != nullptr)
                return false;
        }
        return true;
    }

    void insertUtil(TrieNode* root, const string &word, int i) {
        // base case
        if(i == word.size()) {
            root->isTerminal = true;
            return;
        }

        // Assuming all the chars in this word are capital~
        int index = word[i] - 'A';
        TrieNode* child = nullptr;

        // if that char already exists~
        if(root->children[index] != NULL) {
            child = root->children[index];
        }

        // now if char doesn't exist, create it and link it with this root~
        else {
            child = new TrieNode(word[i]);
            root->children[index] = child;
        }

        // recursive call~
        insertUtil(child, word, i+1);
    }

    bool searchUtil(TrieNode* root, const string &word, int i) {
        // base case~
        if(i == word.size()) {
            return root->isTerminal;
        }

        int index = word[i] - 'A';
        if(root->children[index] == nullptr) {  // this char is absent~
            return false;
        }

        // recursive call 
        return searchUtil(root->children[index], word, i+1);
    }

    public: 
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertWord(string word) {
        insertUtil(root, word, 0);
    }

    void removeWord(string word) {
        removeUtil(root, word, 0);
    }

    bool searchWord(string word) {
        return searchUtil(root, word, 0);
    }

    ~Trie() {
        delete root;
    }
};

int main(){
    Trie *T = new Trie();
    T->insertWord("YASH");
    T->insertWord("YASHIFY");
    T->insertWord("DOG");
    T->insertWord("DOGLAPAN");

    cout<<"DOG is in Trie: " << T->searchWord("DOG") <<endl;
    cout<<"Removing DOG now~"<<endl;
    T->removeWord("DOG");
    cout<<"DOG is in Trie: " << T->searchWord("DOG") <<endl;
    cout<<"DOGLAPAN is in Trie: " << T->searchWord("DOGLAPAN") <<endl;
return 0;
}