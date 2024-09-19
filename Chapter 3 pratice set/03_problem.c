#include<stdio.h>

int main(){

    int income ;
    float tax;
    printf("Enter your income\n");
    scanf("%d",&income);

    if(income<=250000){
        tax=0;
        printf("There are no taxes for u\n");
    }
    else if(income>250000 && income<= 500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income>500000 && income<= 1000000){
        tax =(0.05 * 250000) + 0.02 * (income - 500000);
       
    }
    else if(income>1000000){
        tax =(0.05*250000) + (0.2*500000) + 0.3 * (income -1000000);
        
    }
    printf("your tax for your income  is %f",tax);
    return 0;
}