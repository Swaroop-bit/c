#include<stdio.h>

int main(){

     int i =5;
     printf("The value of i is %d\n",i);
     i = i + 5;
     printf("The value of i is %d\n",i);
    //  ++i;
     printf("The value of i is %d\n",++i);
    
    i =+2; // same as i = i + 2

    // i++ prints first and then increments (Post increment operator)
    // ++i increments i first and then prints i(Post increment Operator)\

    return 0;
}