// https://www.codechef.com/practice/course/binary-search/INTBINS01/problems/KELMT2SORT?tab=Help

// BETTER APPROACH, TC: O(k)

// int findKthElement(const vector < int > & a,
//     const vector < int > & b, int k) {
//     int n = a.size();
//     int m = b.size();
//     int i = 0, j = 0, ans = 0;

//     for (int count = 1; count <= k; count++) {
//         if(i < n && j < m) {
//             if (a[i] > b[j]) {
//                 ans = b[j++];
//             } else {
//                 ans = a[i++];
//             }
//         } 
        
//         else if (i < n) {
//             ans = a[i++];
//         } 
        
//         else {
//             ans = b[j++];
//         }
//     }
    
//     return ans;


// MOST OPTIMAL, using binary search for finding left partition mai kitne 1st array ke elements honge aur kitne 2nd array ke just like we did in "median in two sorted arrays" TC: O(log(min(a,b)))

// int findKthElement(const vector<int> &a, const vector<int> &b, int k) {
//     int n = a.size(), m = b.size();
    
//     if(n > m) {
//         return findKthElement(b, a, k);
//     }
    
//     int mid1, mid2, low = max(0, k-m), high = min(n, k);        // ye boundaries hi main difference hai median se, inko smjho aisi kyu hai
    
//     while(low <= high) {
//         int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
        
//         mid1 = low + (high-low)/2;
//         mid2 = k - mid1;

//         if(mid1 != 0) l1 = a[mid1-1];
//         if(mid2 != 0) l2 = b[mid2-1];
//         if(mid1 != n) r1 = a[mid1];
//         if(mid2 != m) r2 = b[mid2];
        
//         if(l1 <= r2 && l2 <= r1) {
//             // symmertry exists
//             return max(l1,l2);
//         }
        
//         else if(l1 > r2) {
//             high = mid1-1;
//         }
        
//         else{
//             low = mid1+1;
//         }
//     }
    
//     return -1;
// }