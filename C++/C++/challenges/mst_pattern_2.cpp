// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 

#include<iostream>
#include<string>
using namespace std;

// int main(){
//     int n, row = 1, star = 0, j;
//     cin>>n;
//     while (row<=n)
//     {
//         j = 1;
//         while (j<=(n-row+1))
//         {
//             cout<<j<<" ";
//             j++;
//         }

//         j = 1;     
//         while (j <= star)
//         {
//             cout<<"* ";
//             j++;
//         }
//         star = star + 2;

//         j = 1;
//         int count = (n-row+1);
//         while (j <= (n-row+1))
//         {
//             cout<<count<<" ";
//             count--;
//             j++;
//         }

//         cout<<endl;
//         row++;
//     }
    
// return 0;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int j = 0;
//         while(j < (n-i))
//         {
//             cout<<(j+1);
//             j++;
//         }

//         j = 0;
//         while(2*i>j)
//         {
//             cout<<"*";
//             j++;
//         }

//         j = 0;
//         while(j < (n-i))
//         {
//             cout<<((5-i)-j);
//             j++;
//         }

//         cout<<endl;
//     }
    
//     return 0;
// }
