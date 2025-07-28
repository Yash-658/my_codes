/*
BE PROUD, YOU DID THIS QUESTION YOURSELF BEETCH~  (took you an hour btw lol)

Time Complexity: O(n * m + q^2 + qkl)
Space Complexity: O(n * m + r * l)
Where n = #contacts, m = avg contact length, q = queryStr length, k = avg suggestions per prefix, l = avg suggestion length, r = total suggestions.

class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool is_Terminal;

    TrieNode(char ch) {
        this->data = ch;
        this->is_Terminal = false;
        for(int i = 0; i < 26; i++) {
            this->children[i] = nullptr;
        }
    }

    ~TrieNode() {
        for(int i = 0; i < 26; i++) {
            if(children[i]) delete children[i];
        }
    }
};

class Trie {
private:
    void insertUtil(TrieNode* root, const string &str, int i) {
        // base case~
        if(i == str.size()) {
            root->is_Terminal = true;
            return;
        }

        int indx = str[i] - 'a';
        TrieNode* child = root->children[indx];

        // if this pointer doesnt exist, create and link it to root~
        if(!child) {
            child = new TrieNode(str[i]);
            root->children[indx] = child;
        }

        // recursive call
        insertUtil(child, str, i+1);
    }

    TrieNode* lastCharNodeUtil(TrieNode* root, const string &str, int i) {
        // base case~
        if(i == str.size()) {
            return root;
        }

        int indx = str[i] - 'a';
        TrieNode* child = root->children[indx];
        
        // if this doesn't exist, return nullptr~
        if(!child) return nullptr;

        // recursive call
        return lastCharNodeUtil(child, str, i+1);
    }

public:
    TrieNode* root = new TrieNode('\0');

    void insertWord(string str) {
        insertUtil(root, str, 0);
    }

    TrieNode* lastCharNode(string &str) {
        // if this str exists in Trie, returns the last char pointer, else nullptr
        return lastCharNodeUtil(root, str, 0);
    }
};

// already at the last char of the substr
void solve(TrieNode* root, string &temp, vector<string> &ans) {
    temp.push_back(root->data);
    
    // check if current node is a Terminal~
    if(root->is_Terminal) ans.push_back(temp);

    // traverse each of its children
    for(int i = 0; i < 26; i++) {
        if(root->children[i]) solve(root->children[i], temp, ans);
    }

    // backtrack~
    temp.pop_back();
} 

vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    Trie T;
    // store all strings of contact list into trie~
    for(const auto &i: contactList) {
        T.insertWord(i);
    }

    vector<vector<string>> res;

    for(int i = 0; i < queryStr.size(); i++) {
        string str = queryStr.substr(0, i+1);
        vector<string> ans;
        string temp = str;
        temp.pop_back();

        TrieNode* lastChar = T.lastCharNode(str);
        if(lastChar) solve(lastChar, temp, ans);
        if(ans.size() > 0) res.push_back(ans);
    }

    return res;
}

*/