/*
using if, else if and elsee
*/

#include <stdio.h>

int main(){
    int a,b,c,d;
    a=1;
    b=8;
    c=3;
    d=4;

    if(a>b&&b>c&&c>d){
        printf("a is greater= %d",a);
    }
    else if(a<b&&b>c&&c<d){
        printf("b is greater= %d",b);
    }
    else if(c>a&&a>b&&b>d){
        printf("c is greater= %d",c);
    }
    else{
        printf("d is greater= %d",d);
    }
    return 0;
}
