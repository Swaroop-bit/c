#include<stdio.h>

int main(){

    int n ;
    printf("enter the number");
    scanf("%d",&n);
    
    int prime = 0;

    for(int i =2; i<n;i++){

        if(n%i == 0){

            prime =1;
            break;
        }
    }
if(prime){
    printf("%d is not  prime \n",n);
}
else{
    printf("The number is prime");
}    

    return 0;
}