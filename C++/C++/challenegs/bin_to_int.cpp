#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, answer = 0;
    cout<<"Enter binary format to convert into int: ";
    cin>>n;

    for (int i = 0; n!= 0; i++)
    {
        int digit = n%10;
        n = n/10;

        if (digit==1)
        {
            answer = answer + pow(2,i);
        }
    }

    cout<< answer;
return 0;
}