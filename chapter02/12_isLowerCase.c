/*
author: Ruben
*/

#include<stdio.h>

int main() {
    char character;
    printf("Enter a character \n");
    scanf("%c", &character);

    if(character>97 && character<=122){
        printf("is lower case\n");
    }
    else {
        printf("is not lower case\n");
    }
    return 0;
}