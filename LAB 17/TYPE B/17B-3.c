
// c program
#include<stdio.h>
void main(){
	int i,j,rows,cols;
	printf("enter rows and columns respectively: ");
	scanf("%d %d",&rows,&cols);
	int arr1[rows][cols];
	int arr2[rows][cols];
	int result[rows][cols];
    int *p[rows][cols];
    int *pptr[rows][cols];
	printf("For Matrix 1\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("enter elements: ");
			scanf("%d",&arr1[i][j]);
            p[i][j]=&arr1[i][j];
		}
	}
	printf("For Matrix 2\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("enter elements: ");
			scanf("%d",&arr2[i][j]);
            pptr[i][j]=&arr2[i][j];
		}
	}
    int *ptr[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			result[i][j]=arr1[i][j]+arr2[i][j];
            ptr[i][j]=&result[i][j];
            
}
}
    printf("the sum of two matrices is: \n");
    for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d + %d = %d\t",*p[i][j],*pptr[i][j],*ptr[i][j]);
			
}
     printf("\n");
}

}