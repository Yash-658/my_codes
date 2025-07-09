#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable           // so fxn protoyping just allows us to define our fxn after the main fxn so we don't get any errors,
int sum(int, int); //--> Acceptable                  // it's optional as u can just define all ur fxn's before the main fxn tho.
void g();

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}
