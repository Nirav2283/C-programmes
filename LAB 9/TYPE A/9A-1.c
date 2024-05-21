#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum=sum-i;
        }else{
            sum=sum+i;
        }
        i++;
    }
    printf("sum of the series 1-2+3-4+.....+%d is: %d",n,sum);
}