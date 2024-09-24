#include<stdio.h>

int main(){
 int i=1,n;
 printf("Enter the value of n\n");
 scanf("%d",&n);
    do{
printf("The value is %d\n",i);
i++;
    }while(n>=i);

    return 0;
}