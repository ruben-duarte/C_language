/*
averageNumbers.c : finds the average of 3 numbers
*/

#include<stdio.h>

double average(int, int, int);

int main() {
    printf("The average of 1,2,3 is %lf\n", average(1,2,3));
    printf("The average of 52,53,57 is %lf\n", average(52,53,57));
    return 0;
}

double average(int first, int second, int third){
    return (first + second + third) / 3.0; 
}