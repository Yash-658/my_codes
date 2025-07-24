// Approach: first chcek if CBT by doing a level order traversal, and if you found a null node, then you shouldn't find a non-null node now
//              now check for heap property inside the tree with a recursive fxn~


/* 
class Solution {
    bool isCBT(Node* root) {
        // level order traversal~
        queue<Node*> q;
        q.push(root);

        bool found_null = false;
        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();

            if(temp->left) {
                // check if you found null already~
                if(found_null) {
                    // if you already found null and now you are getting an element, it isn't a CBT
                    return false;
                }
                q.push(temp->left);
            }
            
            else found_null = true;

            if(temp->right) {
                // check if you found null already~
                if(found_null) {
                    // if you already found null and now you are getting an element, it isn't a CBT
                    return false;
                }
                q.push(temp->right);
            }
            
            else found_null = true;
        }

        return true;
    }
    
    bool ifMaxHeap(Node* root) {
        // base case~
        if(!root) return true;
        
        if(root->left && root->data < root->left->data) {
            return false;
        }
        
        if(root->right && root->data < root->right->data) {
            return false;
        }
        
        return ifMaxHeap(root->left) && ifMaxHeap(root->right);
    }
    
  public:
    bool isHeap(Node* tree) {
        // if not CBT, return false~
        if(!isCBT(tree)) return false;
        return ifMaxHeap(tree);
    }
};
*/