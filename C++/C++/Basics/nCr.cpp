#include<iostream>
#include<string>
using namespace std;

int factorial(int x)
{
    if(x==1){return 1;}
    return x*factorial(x-1);
}

int nCr(int n, int r)
{ 
    return (factorial(n)/(factorial(r)*factorial((n-r))));           //nCr = returns comb's without taking order in consideration. nCr = n!/r!*(n-r)!
}

int main(){
    int n, r;
    cin>>n>>r;
    cout<<nCr(n,r);
return 0;
}

// ahaha