#include<stdio.h>
void main(){
	int i,j,sum,k;
	char c='A';
	for(i=1;i<=5;i++){
		int a=1;
		for(j=1;j<=5-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			if(i%2==0){
				printf("%c ",c++);
			}else{
				printf("%d ",a++);
			}
			
		}
		printf("\n");
		
		
	}
}
