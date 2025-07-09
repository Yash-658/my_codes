#include<iostream>
#include<string>
#include<vector>                                          // selection sort --  in every round the smallest value takes their correct place.
using namespace std;                                      // bubble sort -- in every round the largest value takes their correct place.

void bubble_sort(vector <int> arr, int size)              // Is a IN_PLACE sorting algo, They rearrange the elements within the original array 
{                                                         // bubble sort is a stable algo (i.e relative order between equal elements is be maintained)                                      
    for (int j = 1; j < size; j++)                        // good with small sample space and adaptable ->> (even better with partially sorted array)
    {
        bool swapped = false;                             // swap se apn ne ye check kiya if array is almost sorted aur already completely sorted,
        for (int i = 0; i < (size-j); i++)                // toh extra baar comparison nhi krna pdhta as compared to selection sort
        {
            if (arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);                    // Time complexity: O(n^2)   ,, Best case- Ω(n)
                swapped = true;                           // Space complexity: O(1)
            }
        }

        if(swapped==false){break;}
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector <int> arr = {7, 8, 40, 1, 45, 80};
    bubble_sort(arr,6);
}

// BUBBLE SORT WITH RECURSION

// void bubbleSort(vector<int> &arr, int size) {    

//     if(size <= 1) {
//         return;
//     }

//     for(int i = 0; i < size-1; i++) {
//         if(arr[i]>arr[i+1]) {
//             swap(arr[i],arr[i+1]);
//         }
//     }

//     bubbleSort(arr,--size);
// }
