// https://www.naukri.com/code360/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb&leftPanelTabValue=SOLUTION

// ⭐⭐⭐ THINK OF THIS QUESTION AS IMPLEMENTING LINKED LIST CONCEPS IN A ARRAY~

// MORE OPTIMISED, using free array as both free and prev~

#include <bits/stdc++.h> 
class NStack
{
public:
    int *arr;
    int *top;
    int *free;  // here if a element is present at i index, it acts as a pointer to prev element, but if no element is present, it shows the index of next free space
    int nextFree;

    NStack(int N, int S)
    {
        arr = new int[S];
        top = new int[N];  // indicating the indx of top elements of stack
        free = new int[S];
        nextFree = 0;      // indicating the next free space for allocation

        for(int i = 0; i < S; i++) {
            if(i < N) top[i] = -1;
            free[i] = i+1; // free indicating the next free space after 'i' for allocation
        }

        free[S-1] = -1;    // indicating no free space
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(nextFree == -1) return false;
        // keep in mind we are always storing index here~
        int newIndx = nextFree;
        arr[newIndx] = x;
        nextFree = free[nextFree];
        free[newIndx] = top[m-1];
        top[m-1] = newIndx;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(top[m-1] == -1) return -1;
        int popped = top[m-1];
        
        top[m-1] = free[popped];
        free[popped] = nextFree;
        nextFree = popped;
        return arr[popped];
    }
};

// NORMAL SOLUTION WITH EXTRA PREV ARR

// class NStack
// {
// public:
//     int *arr;
//     int *top;
//     int *free;
//     int *prev;
//     int nextFree;

//     NStack(int N, int S)
//     {
//         arr = new int[S];
//         top = new int[N];  // indicating the indx of top elements of stack
//         free = new int[S];
//         prev = new int [S];
//         nextFree = 0;      // indicating the next free space for allocation

//         for(int i = 0; i < S; i++) {
//             if(i < N) top[i] = -1;
//             free[i] = i+1; // free indicating the next free space after 'i' for allocation
//             prev[i] = -1;  // -1 indicating no prev of element at ith pos~
//         }

//         free[S-1] = -1;    // indicating no free space
//     }

//     // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
//     bool push(int x, int m)
//     {
//         if(nextFree == -1) return false;
//         // keep in mind we are always storing index here~
//         int newIndx = nextFree;
//         arr[newIndx] = x;
//         nextFree = free[nextFree];
//         free[newIndx] = -1;
//         prev[newIndx] = top[m-1];
//         top[m-1] = newIndx;

//         return true;
//     }

//     // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int pop(int m)
//     {
//         if(top[m-1] == -1) return -1;
//         int popped = top[m-1];
        
//         free[popped] = nextFree;
//         nextFree = popped;
//         top[m-1] = prev[popped];
//         prev[popped] = -1;

//         return arr[popped];
//     }
// };