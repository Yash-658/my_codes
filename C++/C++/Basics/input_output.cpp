#include<iostream>
using namespace std;            // this is like saying, from random import *, so we don't have to write std:: again & again.


int main()
{
    int num_1, num_2;                            
    cout<<"Enter ur first number: ";             // "<<" this is known as insertion operator.
    cin>>num_1;                                  // ">>" this is known as extraction operator.
    
    cout<<"Enter ur second number: ";
    cin>>num_2;
    cout<<"The sum of ur first and second num is: "<<num_1+num_2;
    return 0;
}
