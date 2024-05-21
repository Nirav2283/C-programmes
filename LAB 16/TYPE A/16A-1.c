#include<stdio.h>
void main(){
	int rows,cols,i,j;
	printf("enter value of rows and columns: ");
	scanf("%d %d",&rows,&cols);
	int arr[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("enter array element: ",i);
			scanf("%d",&arr[i][j]);
			
		}
	}
	printf("the matrix form: \n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf(" %d",arr[i][j]);
		}
			printf(" \n");
	
	}

}
