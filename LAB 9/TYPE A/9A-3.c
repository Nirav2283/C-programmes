#include<stdio.h>
void main(){
    int x,y,result=1;
    printf("enter the number(x): ");
    scanf("%d",&x);
    printf("enter the power(y): ");
    scanf("%d",&y);
    while(y>0){
        result=result*x;
       
        y--;

    }
    
     printf("the answer is: %d",result);

}
