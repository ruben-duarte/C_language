/*
temperature.c: it converts celsius to fahrenheit
*/

#include<stdio.h>

float converToFahrenheit(float);

int main() {
    float fahrenheit;
    float celsius = 37.0;
    printf("The value of %f degrees in fahrenheit is %f",celsius, converToFahrenheit(celsius));
    return 0;
}

float converToFahrenheit(float celsius){
    float fahrenheit = (celsius*9/5.0) + 32;
    return fahrenheit;
}