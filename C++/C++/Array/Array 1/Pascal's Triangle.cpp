// https://leetcode.com/problems/pascals-triangle/
// TC: O(numRows^2)   SC: O(numRows^2)

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> ans;
//         vector<int> firstRow(1, 1);
//         ans.push_back(firstRow);

//         for(int rows = 1; rows < numRows; rows++) {     // currenty rows'th index ki array bna rhe hai
//             vector<int> currRow(rows+1);
//             const vector<int> &prevRow = ans[rows-1];   // new vector bnane ki zrurat nhi, ref var bnao

//             int curr = 0, i = -1, j = 0;
//             while(curr < currRow.size()) {
//                 int elem1 = (i == -1 ? 0: prevRow[i]);
//                 int elem2 = (j == prevRow.size() ? 0: prevRow[j]);
                
                
//                 currRow[curr] = elem1 + elem2;
//                 i++; j++, curr++;
//             }

//             ans.push_back(currRow);
//         }

//         return ans;
//     }
// };