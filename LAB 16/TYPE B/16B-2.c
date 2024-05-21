// Multiplication of two matrices. 

#include<stdio.h>

void main(){
	int i,j,x,y,p,q,d,sum=0;
	printf("Enter no rows and columns for first matrix :");
	scanf("%d %d",&x,&y);
    int a[x][y];
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("Enter elements of first matrix :");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter no of rows and columns for second matrix :\n");
    scanf("%d %d",&p,&q);
    int b[p][q];
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
            printf("Enter elements of second matrix :");
            scanf("%d",&b[i][j]);
        }
    }
    printf("First Matrix is :\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("\nSecond Matrix is :\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    int c[i][j];
    if(y!=p){
        printf("can't Multiply");
    }
    else{
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                for(d=0;d<x;d++){
                    sum=sum+(a[i][d]*b[d][j]);
                }
            c[i][j]=sum;
            sum=0;
            }
        }
    printf("Multiplication of two matrix is :\n");
       for(i=0;i<x;i++){
            for(j=0;j<q;j++){
            printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
}

    
    