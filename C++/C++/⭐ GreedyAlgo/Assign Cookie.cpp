// https://leetcode.com/problems/assign-cookies/
// TC: O(nlogn) SC:O(1)

//  int findContentChildren(vector<int>& g, vector<int>& s) {
//        sort(g.begin(), g.end());
//        sort(s.begin(), s.end());

//        int currChild = 0, currCookie = 0;
    
//        while(currChild < g.size() && currCookie < s.size()) {
//             if(g[currChild] <= s[currCookie]) {
//                 // satisfy hojayega bcha~
//                 currChild++;
//             }

//             else{
//                 currCookie++;
//             }
//        }
//        return currChild;
//     }