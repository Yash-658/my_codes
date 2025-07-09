#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    cout<<"Size of 2-D arr: ";
    int n, m;
    cin>>n>>m;

    int **a = new int*[n];    // array of pointers dynamically allocate krwa liya

    for(int i = 0; i < n; i++) {
        a[i] = new int[m];    // abh hr pointer se ek dynamic array allocate krwa li 
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //deleting a dynamically allocated 2D array, hr row manually delete kro and phir array of pointers delete kro

    for(int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    
    return 0;
} 