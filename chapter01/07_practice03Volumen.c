/*
author: Ruben
location: Colombia
find the volumen of a cylinder
*/

#include<stdio.h>

int main() {
    printf("---Volume of a cylinder---\n");
    int radius;
    int height;
    printf("Enter the radius in cm: \n");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder in cm \n");
    scanf("%d", &height);
    
    printf("The volume of the cylinder is %f cm3\n", 3.14*radius*radius*height);

    return 0;
}