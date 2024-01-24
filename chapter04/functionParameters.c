/*
author:Ruben
*/

#include<stdio.h>

int sum(int , int );

int main() {
    printf("%d", sum(8,2));
    return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}