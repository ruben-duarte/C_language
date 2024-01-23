/*
author: Ruben
*/

#include<stdio.h>

int main() {
    int sum=0;
    for(int i = 1; i <=10; i++) {
        sum += i*8;
        printf("%d x 8 = %d \n", i, i*8);
    }
    printf("The sum of 8 table is: %d \n", sum);
    return 0;
}