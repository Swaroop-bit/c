#include<stdio.h>

int main(){
      
     int a=1 ; int b=1;

     printf("The value of a and b is %d\n",a&&b);//&& is AND 
     printf("The value of a or b is %d\n", a||b);// || is OR
     printf("The value of not(a) is %d\n",!a);// value ko palat leta (Not of a)

//   if( a&&b ){
//     printf("both are true")
//   }
// is same as wriitng....
  if(a){
      if(b){
        printf("both are true");
      }
  }

     return 0;

}