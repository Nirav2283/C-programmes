#include<stdio.h>
void main(){
    int b,c,n,i=1,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    //b is last digit
    //c is first digit
        b=n%10;
        while(n>=10){
        	n=n/10;
		}
		c=n;
		sum=c+b;
    printf("sum of first and last digit of given number is: %d",sum);

}
