/*
for loops
*/

#include<stdio.h>

int main() {
   int number;
    for (int i = 0; i < 7; i++)
    {
        printf("The value of i is %d \n", i);
    }
    printf("Enter a number: \n");
    scanf("%d", &number);
    for (int i = 0; i < number ; i++){
        printf("The value of i is %d \n", i);
    }    
    return 0;
}