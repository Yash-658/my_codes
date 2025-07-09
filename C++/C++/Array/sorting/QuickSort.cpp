#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

// QUICK SORT: -> it's in-place as it doesn't use any extra arrays to sort
//             -> Memory usage is O(nlog n) due to the recursion stack (in the best and average case)
//             -> Quick sort is not stable by default


// Feature	Quick Sort
// In-Place	✅ Yes
// Stable	❌ No
// Time (Best/Average)	O( nlogn)
// Time (Worst)	        O(n²)
// Space (Auxiliary)	O( logn ) for recursion



// HERE WE ARE USING WIDELY ACCEPTED LOMUTO PARTITION(choosing last element as pivot) INSTEAD OF THE CRAP THAT LOVE BABAR TAUGHT YOU!

int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[end];           // Use the last element as pivot
    int i = start - 1;              // Place for swapping smaller elements

    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[end]);     // Put pivot in correct place
    return i + 1;                   // Return pivot index
}

void QuickSort(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int p = partition(arr, start, end);
    QuickSort(arr, start, p - 1);
    QuickSort(arr, p + 1, end);
}

int main(){
    vector <int> arr = {9,9,9,8,2,3,-6};
    QuickSort(arr, 0, arr.size()-1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}


