/*
author: Ruben
*/

#include<stdio.h>

int main() {
    int k = 0;
    printf("k++= % d \n", k++);
    printf("k= %d \n", k);
    printf("k--= % d \n", k--);
    printf("k= %d \n", k);
    
    printf("++k= % d \n", ++k);
    printf("k= %d \n", k);
    printf("--k= % d \n", --k);
    printf("k= %d \n", k);

    return 0;
}