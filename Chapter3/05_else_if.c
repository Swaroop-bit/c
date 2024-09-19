#include<stdio.h>

int main(){

    int age = 48;

    if(age>60){
        printf("You can drive and you are senior citizen");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("you can not drive ");
    }
    return 0; 
}