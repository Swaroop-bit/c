#include<stdio.h>
//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
int main(){
     char ch = 'a';
     printf("The character is %c\n",ch);
     printf("the value of character is %d",ch);   
    //97,122
    if(ch>=97 && ch<=122){
        printf("The character is lowercase\n");
    }
    else{
        printf("The character is Uppercsae\n");
    }
    return 0;
}