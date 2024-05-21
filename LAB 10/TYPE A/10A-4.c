#include<stdio.h>
void main(){
    int n,count=0,m;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        m=n%10;
        count++;
        n=n/10;
        
    }
    printf("number of digits in given number is: %d",count);
}
