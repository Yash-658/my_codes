#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

long long pow_2(long long n) {
    if(n==0) return 1;
    return 2*pow_2(n-1);
}

void counting(int n) {
    if(n==0) {
        return;
    }

    counting(n-1);
    cout<<n<<endl;
}

int fibonacci(int n) {
    if(n==0) {
        return 0;
    }

    if(n==1) {
        return 1;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);
}
    

int main() {
    int n;
    cin>>n;
    cout<<fibonacci(n);    
    return 0;
} 