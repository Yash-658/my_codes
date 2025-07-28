
// THIS IS THE TRIE IMPLEMENTATION OF THIS QUESTION, 
// there's one more approach in which we compare each char of the first string one by one with all other strings, it uses constant space and is better if we only want the LCP once~

/*   // char by char approach~
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Check each character one by one from the first word
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];

            // Compare that character with all other strings
            for (int j = 1; j < strs.size(); j++) {
                // Stop if out of bounds or mismatch
                if (i >= strs[j].size() || strs[j][i] != ch)
                    return strs[0].substr(0, i);
            }
        }

        // All characters matched — return full first word
        return strs[0];
    }
};
*/

/*
✅ Time Complexity Comparison
Approach	     Time Complexity	        Space Complexity
Char-by-char	 O(n × M)	                O(1) (or O(M) for result string)
Trie-based	     O(n × M) (insert) 	        O(n × M) (for storing Trie)
                 + O(L) (traverse) 
                 → total: O(n × M + L)

Where:
n = number of strings
M = average length of strings
L = length of the longest common prefix

✅ In Brevity 😉:
Char-by-char:
"Compare directly. Fast, simple, low memory. Great for a one-off LCP."

Trie-based:
"Build once, reuse many. Slightly heavier, but perfect for lots of prefix work."
*/

// class TrieNode {
//     public:
//         char data;
//         TrieNode* children[26];
//         bool isTerminal;

//         TrieNode(char data) {
//             this->data = data;
//             for(int i = 0; i < 26; i++) children[i] = nullptr;
//             isTerminal = false;
//         }

//         ~TrieNode() {
//             for (int i = 0; i < 26; i++) {
//                 if (children[i]) {
//                     delete children[i];
//                 }
//             }
//         }
// };

// class Trie {
//     private:
//     void insertUtil(TrieNode* root, const string &word, int i) {
//         // base case
//         if(i == word.size()) {
//             root->isTerminal = true;
//             return;
//         }

//         // Assuming all the chars in this word are capital~
//         int index = word[i] - 'a';
//         TrieNode* child = nullptr;

//         // if that char already exists~
//         if(root->children[index] != NULL) {
//             child = root->children[index];
//         }

//         // now if char doesn't exist, create it and link it with this root~
//         else {
//             child = new TrieNode(word[i]);
//             root->children[index] = child;
//         }

//         // recursive call~
//         insertUtil(child, word, i+1);
//     }

//     public: 
//     TrieNode* root;

//     Trie() {
//         root = new TrieNode('\0');
//     }

//     void insertWord(string word) {
//         insertUtil(root, word, 0);
//     }

//     ~Trie() {
//         delete root;
//     }
// };

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string res = "";
//         Trie T;
//         for(const auto &i: strs) {
//             T.insertWord(i);
//         }
        
//         TrieNode* curr = T.root;
//         while(!curr->isTerminal) {
//             TrieNode* child;
//             int child_count = 0;
//             // check if single child~
//             for(int i = 0; i < 26; i++) {
//                 if(curr->children[i]) {
//                     child_count++;
//                     child = curr->children[i];
//                 }
//             }

//             if(child_count != 1) return res;
//             res.push_back(child->data);
//             curr = child;
//         }

//         return res;
//     }
// };