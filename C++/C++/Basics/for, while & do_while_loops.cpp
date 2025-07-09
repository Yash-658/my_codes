#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/

    // Syntax for "for loop"
    // for(initialization; condition; updation)          //initialization mai jo code likhte hai vo bs ek baar implement hota hai, uske baad agr condn "True" hui toh loop body ka code run hota hai, aur uske baad updation. 
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)                          //if codn = True, code will run till codn becomes false
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do                                        //so "do While" it runs the code atleast once even if the while codn = False.
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using do while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);
    // A SIMPLE TABLE OF 6.
    int i = 1;
    do{
    cout<<"6x"<<i<<"="<<6*i<<endl;
    i++;
    }while(i<=10);

    return 0;
}
