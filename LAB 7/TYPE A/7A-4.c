#include<stdio.h>
void main(){
    int a,b,c,n;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    n=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("the largest number is: %d",n);
}