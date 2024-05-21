#include<stdio.h>
void main(){
	int n,i,count=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		count=count*i;
	}
	printf("factorial of the %d number is: %d",n,count);
	
}
