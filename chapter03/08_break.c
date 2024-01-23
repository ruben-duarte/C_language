/*
author:Ruben
*/

#include<stdio.h>

int main() {
    int k = 0;
    while(k <8)
    {
        if(k == 7){
            printf("Here's a break ");
            break;
        }
        printf("Testing");
        k++;
    }
    return 0;
}