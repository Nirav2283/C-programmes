#include<stdio.h>
void main(){
    int i,n,a;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        a=n*i;
        printf("%d*%d is : %d\n",n,i,a);
    }

}
