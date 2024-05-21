// #include<stdio.h>
// void main(){
// 	int i,j;
// 	for(i=5;i>=1;i--){
// 		for(j=1;j<=i;j++){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }

//C program to print 'HELLO' pattern using star pattern
#include<stdio.h>

void main(){
	int i,j,temp = 5;
	
	//Outer loop to print number of rows
	for(i=0;i<temp;i++){
		
		//Nested loop to print character 'H'
		for(j=0;j<temp;j++){
			if(j==0 || j==temp-1 || i==temp/2){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		
		//Nested loop to print space between characters
		for(j=0;j<2;j++){
			printf(" ");
		}
		
		//Nested loop to print character 'E'
		for(j=0;j<temp;j++){
			if(i==0 || i==temp/2 || i==temp-1 || j==0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		
		//Nested loop to print space between characters
		for(j=0;j<2;j++){
			printf(" ");
		}
		
		//Nested loop to print character 'L'
		for(j=0;j<temp;j++){
			if(i==temp-1 || j==0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		
		//Nested loop to print space between characters
		for(j=0;j<2;j++){
			printf(" ");
		}
		
		//Nested loop to print character 'L'
		for(j=0;j<temp;j++){
			if(i==temp-1 || j==0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		
		//Nested loop to print space between characters
		for(j=0;j<2;j++){
			printf(" ");
		}
		
		//Nested loop to print character 'O'
		for(j=0;j<temp;j++){
			if(i==0 || i==temp-1 || j==0 || j==temp-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}