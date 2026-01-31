// https://leetcode.com/problems/median-of-two-sorted-arrays/description/

// better approach~ (using two pointers like we do in merging two sorted arrays and sorting half of the total elemenets to find the median)

/*
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0, m1 = 0, m2 = 0;

        // Find median.
        for (int count = 0; count <= (n + m) / 2; count++) {
            m2 = m1;
            if (i != n && j != m) {
                if (nums1[i] > nums2[j]) {
                    m1 = nums2[j++];
                } else {
                    m1 = nums1[i++];
                }
            } else if (i < n) {
                m1 = nums1[i++];
            } else {
                m1 = nums2[j++];
            }
        }

        // Check if the sum of n and m is odd.
        if ((n + m) % 2 == 1) {
            return static_cast<double>(m1);
        } else {
            double ans = static_cast<double>(m1) + static_cast<double>(m2);
            return ans / 2;
        }
    }
*/

// MOST OPTIMAL APPROACH~  O(log(min(a,b)))

// class Solution {
// public:
//     // for odd, we will consider n+m+1/2 elements for symmetery~ (so max(l1, l2) will be the median)

//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int n = nums1.size();
//         int m = nums2.size();

//         if(n > m) return findMedianSortedArrays(nums2, nums1);  

//         if(n == 0) {
//             // if m is odd
//             if(m%2) {
//                 return nums2[m/2];
//             }

//             else{
//                 return (nums2[m/2] + nums2[(m/2)-1])/2.0;
//             }
//         }

//         int symmetry = (n + m + 1) / 2;    // this handles for both odd and even cases~
//         int mid1, mid2, s = 0, e = n;

//         while(s <= e) {
//             mid1 = (s+e)/2;          // mid1: number of elements we will take from nums1 on the left side
//             mid2 = symmetry - mid1;   // mid2: number of elements we will take from nums2 on the right side

//             // if(mid1 > symmetry)  don't have to check for this as symmetry >= n (guaranteed because n ≤ m)

//             // check if taking 'mid' elements from nums1 results into valid symmetry~
//             int l1, l2, r1, r2;

//             // assigning values of l1,l2,r1,r2 while taking in consideration of boundry cases~
//             l1 = (mid1 == 0) ? INT_MIN : nums1[mid1-1];
//             l2 = (mid2 == 0) ? INT_MIN : nums2[mid2-1];
//             r1 = (mid1 == n) ? INT_MAX : nums1[mid1];
//             r2 = (mid2 == m) ? INT_MAX : nums2[mid2];

//             // case1: l1 < r2
//             if( l1 > r2 ) {
//                 e = mid1-1;
//             }

//             else if( l2 > r1 ) {
//                 s = mid1 + 1;
//             }

//             else {
//                 // mathematically there's no case where both (l1 > r2) && (l2 > r1)
//                 // symmetry found!
//                 if((n+m)%2 == 0) {
//                     return (max(l1, l2) + min(r1, r2))/2.0;
//                 }

//                 else {
//                     return (max(l1, l2));
//                 }
//             }
//         }

//         return -1; // unreachable
//     }
// };