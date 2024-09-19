#include<stdio.h>

int main (){

int celcius;
printf("enter celcius\n");
scanf("%d", &celcius);

float fahrenheit;
fahrenheit = 1.8*celcius + 32;
printf("fahrenheit = %.1f",fahrenheit);
return 0;
}