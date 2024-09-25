#include<stdio.h>

int main(){

    int fact = 1;
    int i = 6;
    do{
        fact *=i;
        i--;
    } while (i>=fact);
    
    printf("The value of factorial is %d",fact);

    return 0;
}