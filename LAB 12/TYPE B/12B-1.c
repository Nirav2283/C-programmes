#include<stdio.h>
void main(){
	int n,i,sum1=0,sum2=0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum1=sum1+i;
		sum2=sum1+sum2;
	}
	printf("sum of the series:%d\n",sum2);
	
}
