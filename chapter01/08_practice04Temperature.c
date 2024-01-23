/*
calculate the conversion of celsius to fahrenheit
*/

#include<stdio.h>

int main() {
    printf("Celsius conversion to fahrenheit \n");
    float celsius;
    float fahrenheit;
    printf("Enter temperature in celsius degrees: \n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Fahrenheit degrees: %f\n", fahrenheit);

    return 0;
}