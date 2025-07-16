

// vector<vector<int>> verticalOrder(Node *root) {
//         vector<vector<int>> ans;
//         map<int,vector<int>> col_mapping;
        
//         queue<pair<Node*, int>> q;
//         q.push({root, 0});
        
//         while(!q.empty()) {
//             pair<Node*, int> p = q.front();
//             q.pop();
        
//             Node *curr_node = p.first;
//             int col = p.second;
            
//             col_mapping[col].push_back(curr_node->data);
            
//             if(curr_node->left) q.push({curr_node->left, col-1});
//             if(curr_node->right) q.push({curr_node->right, col+1});
//         }
        
//         for(const auto& pair: col_mapping) {
//             ans.push_back(pair.second);
//         }
        
//         return ans;
//     }