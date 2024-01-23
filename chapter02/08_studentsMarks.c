/*
author: Ruben
location: Colombia
*/

#include<stdio.h>

int main() {
    int note1, note2, note3;
    printf("Enter note 1: \n");
    scanf("%d", &note1);
    printf("Enter note 2: \n");
    scanf("%d", &note2);
    printf("Enter note 3: \n");
    scanf("%d", &note3);

    float total = (note1 + note2 + note3)/3;

    if(total > 40){
        if(note1<33 || note2<33 || note3 < 33){
            printf("Not passing, notes or one note below 33%%");
        }
        else{
            printf("Congratulations you passed");
        }
    }
    else{
            printf("Not passing, total below 40%% total = %f",total); // use %% to show % in a string
        }
    return 0;
}