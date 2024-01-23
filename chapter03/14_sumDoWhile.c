/*aurhor: Ruben*/

#include<stdio.h>

int main() {
    int sum = 0;
    int i = 0;
    do{
        sum += i;
        i++;
    } while(i < 11);
    printf("The sum is: %d\n",sum);
    return 0;
}