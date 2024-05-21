#include <stdio.h>
void main(){
	int i,j,rows,cols;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	printf("Enter number of cols: ");
	scanf("%d",&cols);
	int mat[rows][cols];

	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("enter elements: ");
			scanf("%d",&mat[i][j]);
			
		}
	} 
		int trans[cols][rows];
	
	  printf("original matrix is: \n");
	    for(i=0;i<rows;i++){
	    	for(j=0;j<cols;j++){
	    		printf("%d",mat[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<rows;i++){
			for(i=0;i<cols;j++){
			 trans[j][i]=mat[i][j];
			}
			
		}
		printf("Transpose of the matrix is: ");
		for(i=0;i<cols;i++){
			for(j=0;j<rows;j++){
				printf("%d",trans[i][j]);
			}
			printf("\n");
		}
		
}
