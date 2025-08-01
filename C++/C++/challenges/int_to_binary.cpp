// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;

// int main(){
//     int n, bin[32] = {0};          //isse saare 32 values of array  mai 0 store hogya.
//     cout<<"Enter integer to convert to binary: ";
//     cin>>n;
//     if (n>0)
//     {
//         for (int i = 1; n!=0; i++)
//         {
//             bin[(32-i)] = (n&1);                  //cuz (n&1) will give 1 if last digit of binary format of "n" is 1, and 0 if it's 0.
//             n = n>>1;
//         }
//     }

//     else if (n<0)
//     {
//         n = (n*-1);

//         for (int i = 1; n!=0; i++)
//         {
//         bin[(32-i)] = (n&1);  
//         n = n>>1;
//         }

//         for (int i = 0; i < 32; i++)
//         {
//             if (bin[i]==0)
//             {
//                 bin[i]=1;
//             }

//             else
//             {
//                 bin[i]=0;
//             }
            
//         }

//         if (bin[31]==0)
//         {
//             bin[31]=1;
//         }

//         else
//         {
//             bin[31]=0;
//             bin[30]=1;
//         }
//     }
        
//     for (int i = 0; i < 32; i++)
//     {
//         cout<<bin[i];
//     }
    
// return 0;
// };


// string toBinary(int n)
// {
//     std::string r;
//     while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
//     return r;
// }

// int main()
// {
//     cout<<toBinary(6);
//     return 0;
// }