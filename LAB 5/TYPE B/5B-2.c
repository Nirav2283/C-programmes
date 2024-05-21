#include<stdio.h>
void main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if((n&1)==0){
		printf("number is even");
	}else { 
		printf("number is odd");
	}
}
