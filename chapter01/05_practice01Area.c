/*
author: Ruben
location: Colombia
find the are of a rectangle
*/

#include<stdio.h>

int main()
{

    int width;
    int height;
    int area;

    printf("Area of the rectangle in cm2 \n"); 
    printf("enter the width of the rectangle in cm: \n");
    scanf("%d", &width);
    
    printf("enter the heigth of the rectangle in cm: \n");
    scanf("%d", &height);
    
    area = width*height;
    printf("Area of the rectangle in is %d cm2", area);

    return 0;
}