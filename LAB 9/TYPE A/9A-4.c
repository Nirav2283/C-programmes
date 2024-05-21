#include<stdio.h>
int main(){
    int n,i=1,count=1;
    printf("enter the numnber: ");
    scanf("%d",&n);
    while(i<=n){
        count=count*i;
        i++;
    }
    printf("factorial of given number is:%d",count);
    return 0;
}