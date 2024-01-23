/*
check if a number is divisible by 97
*/

#include<stdio.h>

int main() {
    int number;
    printf("Enter a number:  \n");
    scanf("%d", &number);
    printf("%d", number%97);

    return 0;
}