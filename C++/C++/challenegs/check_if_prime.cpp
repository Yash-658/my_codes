#include<iostream>                      
#include<string>
using namespace std;


int check_prime(int);

int main(){
    int n;
    cout<<"Enter no. to check if it's prime: ";
    cin>>n;
    if(check_prime(n)){cout<<n<<" is a prime number";}
    else{cout<<n<<" is not a prime number";}
return 0;
}

int check_prime(int n){

    for(int i = 2; i<n; i++)
    {
        if ((n%i)==0)
        {
            return 0;
        }
    }
    return 1;
}