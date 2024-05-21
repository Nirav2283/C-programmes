#include<stdio.h>
void main(){
    int n,i=2,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=n/2);
    if(n%i==0){
        count=1;
    }else{
        i++;
    }
    if(count==0){
        printf("prime number");
    }else{
        printf("not prime");
    }
}
