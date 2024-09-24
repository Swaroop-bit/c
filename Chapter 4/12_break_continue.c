#include<stdio.h>

int main(){
   
    for(int i = 0; i<15 ; i++){

        if(i==9){
            break;//Exit the loop now
        }
        printf("i is %d\n",i);
    }
   printf("FOR LOOP IS DONE !");
    return 0;   
}