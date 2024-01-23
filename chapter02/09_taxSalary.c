/*
author: Ruben
*/

#include<stdio.h>

int main() {
    float salary,tax;
    printf("Enter salary: \n");
    scanf("%f", &salary);

    if(salary>=2500000&&salary<5000000){
        tax = salary*0.05;
        printf("tax to pay: %f\n", tax);
    }
    else if(salary>=5000000 && salary<=10000000){
        tax = salary*0.20;
        printf("tax to pay: %f\n", tax);
    }
    else if(salary>10000000){
        tax = salary*0.30;
        printf("tax to pay: %f\n", tax);
    }
    else{
        tax = 0;
        printf("tax to pay: %f\n", tax);
    }

    return 0;
}