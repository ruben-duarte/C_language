/*
author:Ruben
*/

#include<stdio.h>

int main() {
    int n;
    int result;
    printf("Enter a number \n");
    scanf("%d", &n);
    printf("Time table of %d \n",n);
    for(int i = 0; i <11; i++) {
        printf("%d x %d = %d \n", n,i, i*n);
    }
    return 0;
}