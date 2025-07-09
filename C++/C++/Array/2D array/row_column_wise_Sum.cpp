#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <stack>
#include <climits>

using namespace std;

void row_wise_sum(int mat[][3],int m,int n) {
    for(int i = 0; i < m; i++) {
        int row_sum = 0;
        for(int j = 0; j < n; j++) {
            row_sum += mat[i][j];
        }
        cout<<row_sum<<" ";
    }
    cout<<endl;
}

// void column_wise_sum(int mat[][3],int m,int n) {
//     for(int i = 0; i < m; i++) {
//         int column_sum = 0;
//         for(int j = 0; j < n; j++) {
//             column_sum += mat[j][i];
//         }
//         cout<<column_sum<<" ";
//     }
// }

int max_row_wise_sum(int mat[][3],int m,int n) {
    // int arr[m];
    int max_row = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i < m; i++) {
        int row_sum = 0;
        for(int j = 0; j < n; j++) {
            row_sum += mat[i][j];
        }

        if(row_sum>max_sum) {
            max_sum = row_sum;
            max_row = i;
        }
        // arr[i] = row_sum;
    }
    
    // int max_row = 0;

    // for(int i = 1; i<m; i++) {
    //     if(arr[max_row]<arr[i]) {
    //         max_row = i;
    //     }
    // }
    return max_row;
}

// int max_column_wise_sum(int mat[][3],int m,int n) {
//     int arr[m];
//     for(int i = 0; i < m; i++) {
//         int column_sum = 0;
//         for(int j = 0; j < n; j++) {
//             column_sum += mat[j][i];
//         }
//         arr[i] = column_sum;
//     }
    
//     int max_column = 0;

//     for(int i = 1; i<m; i++) {
//         if(arr[max_column]<arr[i]) {
//             max_column = i;
//         }
//     }
//     return max_column;
// }

int main(){
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    // row_wise_sum(mat,3,3);
    // column_wise_sum(mat,3,3);
    // cout<<max_row_wise_sum(mat,3,3);
    // cout<<max_column_wise_sum(mat,3,3);
}