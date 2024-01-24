/*
author:Ruben
*/

#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodnight();

int main() {
    goodMorning();
    goodAfternoon();
    goodnight();
    return 0;
}

void goodMorning(){
    printf("Good morning\n");
}

void goodAfternoon(){
    printf("Afternoon\n");
}

void goodnight(){
    printf("Good Night\n");
}