#include<iostream>            //same as, import random, this is know as header file, there can be various import file 


int main(){                   // all files in c++ starts with defining the main fxn, everything is coded inside this. Int before this means the fxn will return a integer value.
    int a = 6, b = 10;        // we can assign two variables of the same type in a line.
    char letter = 'a';    //char always denoted with '' & not ""
    bool x = true;
    bool y = false;
    std::cout<<"Hello world.\nHere, the value of a is: "<<a<<".\nThe value of b is: "<<b<<"\nA char is a data-type which can contain only a letter, for ex: "<<letter;     
    std::cout<<"\nIf the bool value is true, it returns "<<x<<"\nIf the bool value is false, it returns "<<y;   
    return 0;                 //To add a line break we use: \n or endl
}

/*
Rules to remember when declaring a variable:
> Variable names in C++ can range from 1 to 225 char
> All variable names must begin with a letter of alphabet or an underscore(_)
> After the first initial letter, variable names can also contain letters and num's
> No spaces or special characters are allowed.
> cannot use a reserved keyword as a variable name. 
*/


// 2 types of header files are there
// 1) system header file: it comes with the compiler              example: #include<iostream>
// 2) user define header file: it is written by a programmer    example: #include"file_name"     (include file path if file isn't present in current directory)


//FUNCTION OVERLOADING:
// Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequence.
// then the compiler is smart enough to handle which fxn should be run on the basis of different no. of parameters passed
// EXAMPLE:
int sum(float a, int b){
    std::cout<<"Using function with 2 arguments"<<std::endl;
    return a+b;
}

int sum(int a, int b, int c){
    std::cout<<"Using function with 3 arguments"<<std::endl;
    return a+b+c;
}
