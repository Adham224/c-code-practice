#include <stdio.h>
void main(){
    int x,y,count=0;
        printf("enter your dividend and divisor");
        scanf("%d %d", &x, &y);
      
    if(x>y)
    while (y<=x){

        x=x-y;
        count++;
       }
       else
        while(x>=y){
            x=x-y;
            count++;}
            printf("the quotient is %d",count);
        }