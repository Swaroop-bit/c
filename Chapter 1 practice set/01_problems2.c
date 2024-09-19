#include<stdio.h>


int main (){
       
     int length;
     printf("Enter Length \n");
     scanf("%d", &length);

     int breadth;
     printf("Enter breadth \n");
     scanf("%d",&breadth);

     int area;
     area = length*breadth;
     printf("area = %d",area);

    return 0;
}

