/*
Ternary
condition ? expression if true : expression if false
*/

#include<stdio.h>

int main() {
    int c = 7;
    int b = 4;
    int a = (c==b) ? 1 : 0;
 
    printf("The value is %d\n", a);
    return 0;
}