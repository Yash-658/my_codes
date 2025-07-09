#include<iostream>
#include<string>
using namespace std;

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swap_using_Pointers(int* x, int* y){               
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_using_ReferenceVar(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;    
}
int main(){
    int a = 5, b = 9;
    // cout<<"The current value of a & b are: "<<a<<" and "<<b<<endl;
    // swap(a, b);                   //this won't be able to swap the values, cux that fxn just swapped the values just in its local scope. That's why we use pointers to change values.
    // cout<<"The current value of a & b are: "<<a<<" and "<<b<<endl;
    // swap_using_Pointers(&a,&b);   //this will swap a & b using pointers
    // cout<<"The current value of a & b are: "<<a<<" and "<<b<<endl;
    swap_using_ReferenceVar(a,b);   //this will swap a & b using Reference_variables.
    cout<<"The current value of a & b are: "<<a<<" and "<<b<<endl;
    return 0;
}