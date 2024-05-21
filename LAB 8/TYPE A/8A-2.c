#include<stdio.h>
void main(){
    int i=0;
    printf("odd numbers between 1 and 10 is: \n");
    while(i<=10){
    	if(i%2!=0){
    		printf("%d\n",i);
		}
		i++;
	}
	int j=0,n;
	printf("enter the positive integer n: ");
	scanf("%d",&n);
	printf("odd numbers between 1 and %d is: \n",n);
	while(j<=n){
		if(j%2!=0){
			printf("%d\n",j);
		}
		j++;
	}
}
