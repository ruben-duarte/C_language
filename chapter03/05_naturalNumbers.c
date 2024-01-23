/*
author: Ruben
location:Colombia
*/

#include<stdio.h>

int main() {
    int number;
    int i = 0;
    printf("Write a number: ");
    scanf("%d", &number);
    do{
        printf("%d", i);
        i++;
    }while (i < number);
    
    return 0;
}