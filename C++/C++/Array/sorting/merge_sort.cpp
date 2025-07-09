#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// Property	            Merge Sort
// Stable	            ✅ Yes
// In-Place	            ❌ No
// Time (All Cases)	    O(n log n)
// Space	            O(n)
// Suitable for Linked List?	✅ Yes — no extra space needed there!
// Used in	External sorting, TimSort (with modifications)


void merge(vector<int> &arr, int start, int end, vector<int> &temp) {
    int mid = start + (end-start)/2;

    int index1 = start, index2 = mid + 1, k = start;

    while(index1<=mid && index2<=end) {

        if(arr[index1]<=arr[index2]) {
            temp[k++] = arr[index1++];
        }

        else {
            temp[k++] = arr[index2++];
        }
    }

    while(index1<=mid) {
        temp[k++] = arr[index1++];
    }

    while(index2<=end) {
        temp[k++] = arr[index2++];
    }

    // copying elements from the temp array into the original array
    for(int i = start; i <= end; i++) {
        arr[i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int start, int end, vector<int> &temp) {
    //base case
    if(start >= end) {
        return;
    }

    int mid = start + (end-start)/2;
    
    // left side sorting
    mergeSort(arr, start, mid, temp);

    // right side sorting
    mergeSort(arr, mid+1, end, temp);

    //merging both of the sorted array
    if (arr[mid] > arr[mid + 1]) {
        merge(arr,start,end,temp);
    }
}

int main(){
    vector <int> arr = {8,5,4,2,4,15};
    vector <int> temp(arr.size());
    mergeSort(arr, 0, arr.size()-1, temp);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}

