/*
author: Ruben
*/

#include<stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter first number: \n");
    scanf("%d",&a);
    printf("Enter second number: \n");
    scanf("%d",&b);
    printf("Enter third number: \n");
    scanf("%d",&c);
    printf("Enter fourth number: \n");
    scanf("%d",&d);
   
    if(a<b && c<d){
        if(b<d){
            printf("%d is greater",d);
        }
        else{
            printf("%d is greater",b);
        }
    }
    else if(b<a && d<c){
        if(a<c){
            printf("%d is greater",c);
        }
        else{
            printf("%d is greater",a);
        }
}

    return 0;
}