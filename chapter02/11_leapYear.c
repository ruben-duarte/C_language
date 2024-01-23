/*
Un año es bisiesto en el calendario Gregoriano, si es divisible entre 4 y no divisible entre 100, y también si es divisible entre 400.
*/

#include<stdio.h>

int main() {
    int year;
    printf("Enter the year you want to check: \n");
    scanf("%d", &year);

    if((year%4 == 0 && year%100 != 0) || year%400 == 0){
        printf("the year %d is leap year", year);
    }
    else{
        printf("the year %d is not leap year", year);
    }
    return 0;
}