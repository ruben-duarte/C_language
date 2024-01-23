/*
author: Ruben
*/

#include<stdio.h>

int main() {
    printf("The sum of first ten natural numbers is: \n");
    int counter = 0;
    int sum = 0;
    while(counter < 11) {
        sum += counter;
        counter++;
    }
    printf("%d\n", sum);

    return 0;
}