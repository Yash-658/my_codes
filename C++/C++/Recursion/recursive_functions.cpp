#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// bool isSorted(int num[], int start, int end) {
//     if(start==end) {
//         return 1;
//     }

//     if(num[start]>num[start+1]) {
//         return 0;
//     }

//     else {
//         return isSorted(num,start+1,end);
//     }

// }

// int all_sum(int *num, int size) {
//     if(size==0) {
//         return 0;
//     }

//     return *num+all_sum(num+1,--size);
// }

// bool linear_Search(int *num, int size, int target) {
//     if(size==0) {
//         return false;
//     }

//     if(*num==target) {
//         return true;
//     }

//     else {
//         return linear_Search((num+1),--size,target);
//     }
// }

int binary_search(int *arr, int start, int end, int target) {
    if(start>end) {
        return -1;
    }

    int mid = start + (end-start)/2;

    if(arr[mid]==target) {
        return mid;
    }

    else if(arr[mid]>target) {
        return binary_search(arr, start, end = mid-1 , target);
    }

    else {
        return binary_search(arr, start = mid+1 , end, target);
    }
}
 
int main(){
    int num[] = {4,5,7,8,11};


    cout<<"Is key present in array --> ";
    int ans = binary_search(num,0,5,11);
    if(ans!=-1) {
        cout<<"Yes... at "<<ans<<"th index"<<endl;
    }

    else {
        cout<<"No";
    }

    // cout<<linear_Search(num,5,11);

    // cout<<all_sum(num,5);

    // if(isSorted(num,0,5)) {
    //     cout<<"Array is sorted"<<endl;
    // }

    // else {
    //     cout<<"Array is not sorted"<<endl;
    // }
    return 0;
}