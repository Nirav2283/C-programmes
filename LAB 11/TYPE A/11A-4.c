#include<stdio.h>
void main(){
	int x,y,result=1;
	printf("enter the base: ");
	scanf("%d",&x);
	printf("enter the exponent: ");
	scanf("%d",&y);
	for(y;y>0;y--){
		result=result*x;
	}
	printf("ans is:%d",result);
}
