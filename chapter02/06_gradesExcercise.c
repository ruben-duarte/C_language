/*
excercise using if
*/

#include<stdio.h>

int main() {
    printf("**grade calculation**\n");
    puts("==Welcome==");
    printf("Enter your grade: ");
    int note;
    scanf("%d", &note);
    if(note>90&&note<100){
        printf("Your grade is A");
    }
    else if(note>60&&note<91){
        printf("Your grade is B");
    }
    else{
        printf("Your grade is C");
    }
    return 0;
}