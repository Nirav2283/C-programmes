#include<stdio.h>
void main(){
	int n,i,p1=0,p2=1;
	printf("enter the range(means terms): ");
	scanf("%d",&n);
	int p3=p1+p2;
	printf("fibonnaci series is: %d %d ",p1,p2);
	for(i=3;i<=n;i++){
		printf("%d ",p3);
		p1=p2;
		p2=p3;
		p3=p1+p2;
	}
	
	
	
}
