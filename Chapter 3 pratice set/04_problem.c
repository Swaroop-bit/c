#include<stdio.h>

int main(){

    int year;
    printf("Enter the year \n");
    scanf("%d",&year);

     if((year %4==0 && year%100!=0 || year %400 == 0)){
        printf("The year given is a leap year");
     }
     else {
        printf("The year give is not a leap year");
     }
    return 0;
}