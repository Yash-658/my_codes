// O(n2) brute force mai sirf hr element ke liye loop krke dekhlo if its bigger then any element placed ahead, if yes -> count++ of inversion~

// Optimal Solution TC: O(nlogn) SC: O(n) uses merge sort~

// class Solution {
//   public:
//     void merge(vector<int> &arr, int left, int mid, int right, vector<int> &temp, int &inversions) {
        
//         // logic of merging two sorted arr~
//         int i = left, j = mid+1, curr = left;
//         while(i <= mid && j <= right) {
//             if(arr[i] <= arr[j]) {
//                 temp[curr++] = arr[i++];
//             }
            
//             else{
//                 inversions += mid-i+1;                    // as we know this arr[j] is smaller than all the numbers present in the first sorted arr, so add all those in inversions~
//                 temp[curr++] = arr[j++];
//             }
//         }
        
//         while(i <= mid) {
//             temp[curr++] = arr[i++];
//         }
        
//         while(j <= right) {
//             temp[curr++] = arr[j++];
//         }
        
//         for(int i = left; i <= right; i++) arr[i] = temp[i];
//     }
    
//     void mergeSort(vector<int> &arr, int left, int right, vector<int> &temp, int &inversions) {
//         if(left >= right) return;
        
//         int mid = (left + right)/2;
        
//         //sort left and right arr~
//         mergeSort(arr, left, mid, temp, inversions);
//         mergeSort(arr, mid+1, right, temp, inversions);
        
//         merge(arr, left, mid, right, temp, inversions);
//     }
  
//     int inversionCount(vector<int> &arr) {
//         int n = arr.size(), inversions = 0;
//         vector<int> temp(n); 

//         mergeSort(arr, 0, n-1, temp, inversions);
//         return inversions;
//     }
// };