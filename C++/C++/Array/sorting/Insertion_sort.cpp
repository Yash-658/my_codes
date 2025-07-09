#include<iostream>
#include<string>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){                  // Insertion sort is stable, good with small sample space and adaptable ->> (even better with partially sorted array)
    int temp, j;
    for(int i = 1; i < n; i++)                                // Time complexity - O(n^2) ,, Best case- Ω(n)
    {                                                         // Space complexity - O(1)
        temp = arr[i];
        j = (i-1);

        while(j>=0)
        {
            if(arr[j]>temp)
            {
                arr[j+1] = arr[j];
                j--;
            }
             
            else
            {
                break;
            }
        }

        arr[j+1] = temp;
    }
}

int main()
{
    vector <int> arr = {7,8,4,1,9,5};
    insertionSort(6, arr);

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// void insertion_sort(vector<int> &arr, int i = 1) {
//     // base case

//     if(i == arr.size()) {
//         return;
//     }

//     //processing 
//     int j = i-1, temp = arr[i];
    
//     while(j>=0) {
//         if(arr[j]>temp) {
//             arr[j+1] = arr[j];
//             j--;
//         }

//         else {
//             break;
//         }
//     }
    
//     arr[j+1] = temp;
    
//     // recursive call
//     return insertion_sort(arr, ++i);
// }