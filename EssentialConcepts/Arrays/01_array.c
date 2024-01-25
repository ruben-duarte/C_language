/*
Arrays
author: Ruben
location: Colombia
*/

#include<stdio.h>

int main() {
    int A[8]; // array declaration loads into the stack (memory)
    int B[3] = {1,2,3}; // array declaration and initializes 
    int i;

    for(i=0; i<3; i++){
        printf("%d ", B[i]); // accessing array 
    }

    return 0;
}
