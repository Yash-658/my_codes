#include<iostream>
#include<string>
#include<vector>
using namespace std;                                             // time complexity = O(n^2), space complexity = O(1),, worst case aur best case dono mai time complexity same rhegi
void selection_sort(vector <int> arr)                            // USE CASE( kbh use kroge ),, jb sample chota hoga tbh.
{                                                                // Isn't a stable sorting algo (search google for meaning of stable)
    for (int j = 0; j < (arr.size()-1); j++)
    { 
        int min_num = j;
        for (int i = (j+1); i < arr.size(); i++)
        {
            if (arr[i] < arr[min_num])
            {
                min_num = i;
            }
        }
        swap(arr[min_num],arr[j]);
    }    
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector <int> arr = {7, 9, 40, 8, 50};
    selection_sort(arr);
return 0;
}

// SELECTION SORT WITH RECURSION

// void selection_sort(vector<int> &arr, int size) {

//     if(size==1) {
//         return;
//     }

//     int min = arr.size()-size;
    
//     for (int i = arr.size()-size+1; i < arr.size(); i++)
//     {
//         if(arr[min] > arr[i]) {
//             min = i;
//         }
//     }

//     swap(arr[arr.size()-size],arr[min]);

//     return selection_sort(arr,--size);
// }