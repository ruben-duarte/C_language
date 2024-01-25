/*
author: Ruben
Recursion
*/

#include<stdio.h>

// factorial(n) = n * n-1 * n-2 * ... * 3 * 2 * 1
// factorial(n) = n * (n-1 * n-2 * ... * 3 * 2 * 1)  = n * factorial(n-1)

int factorial(int);

int main() {
    printf("The value of the factorial of 3 is %d\n", factorial(3));    
    return 0;
}

int factorial(int n){
    if(n<1){
        return 1;   
    }
    return n*factorial(n-1);
}
