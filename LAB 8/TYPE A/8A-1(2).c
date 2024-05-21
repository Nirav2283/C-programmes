#include<stdio.h>
void main(){
    int i=1,n;
    printf("enter the number: ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
}