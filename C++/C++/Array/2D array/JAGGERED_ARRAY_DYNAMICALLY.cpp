#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    cout<<"Rows of jaggered arr: ";
    int n,m;
    cin>>n;

    vector<int> row_length;

    int **a = new int*[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Length of row"<<i<<": ";
        cin>>m;
        row_length.push_back(m);
        a[i] = new int[m];
    }

    for(int i = 0; i < n; i++) {
        int array_size = row_length[i];
        cout<<"Content of row"<<i<<": ";
        for(int j = 0; j < array_size; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        int array_size = row_length[i];
        for(int j = 0; j < array_size; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    for(int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;
} 