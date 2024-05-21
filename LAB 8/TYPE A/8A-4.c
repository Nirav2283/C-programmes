#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    printf("enter the positive number n: ");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of 1 to %d number is: %d\n",n,sum);
}