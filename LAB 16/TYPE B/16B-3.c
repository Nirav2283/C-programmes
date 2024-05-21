#include<stdio.h>
void main(){
    int rows,cols,i,j,sum=0;
    printf("enter rows and columns: \n");
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    if(rows!=cols){
        printf("Diagonal does not exist");
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("enter elements: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Diagonal elements are: \n");
    for(i=0;i<rows;i++){
       
            sum=sum+arr[i][i];
            
        
        printf("%d\t",arr[i][i]);
    }
    printf("\nsum of diagonal element is: %d",sum);
    }

