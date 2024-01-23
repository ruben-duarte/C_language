/*
author: Ruben
location: Colombia
find the are of a circle
*/

#include<stdio.h>

int main() {
    printf("Area of a circle // ");
    int radius;
    float PI = 3.1416;
    float area;
    
    printf("Enter the radius in cm : ");
    scanf("%d", &radius); 
    area = PI*radius*radius;
    printf("The area is %f cm2", area);

    return 0;
}