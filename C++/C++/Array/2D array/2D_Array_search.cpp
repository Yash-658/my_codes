#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <stack>

using namespace std;

pair<int,int> search_matrix(int mat[][3], int key, int m,int n) {
    pair<int,int> sol;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == key) 
            {
                sol.first = i;
                sol.second = j;
                return sol;
            }
        }
    }
}

int main(){
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    pair<int,int> sol = search_matrix(mat,5,3,3);
    cout<<sol.first<<" ";
    cout<<sol.second;

}