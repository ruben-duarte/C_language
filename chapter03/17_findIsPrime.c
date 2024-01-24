/*
author:Ruben
*/

#include<stdio.h>

int main() {
    int number;
    int divisible;
    printf("Enter a number: \n");
    scanf("%d", &number);
    for(int i = 2; i <= number; i++){
        if(number % i == 0 && i !=number ){
            printf("Its not prime.\n");
            break;
        }else{
            printf("Its prime.\n");
            break;
        }
    }

    return 0;
}