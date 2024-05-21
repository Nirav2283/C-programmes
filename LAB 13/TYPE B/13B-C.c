
#include <stdio.h> 

void main(){
	int i,j,k,n; 
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++) { 
		for (j=1;j<=i;j++) { 
			printf(" "); 
	}
		for (k=i;k<=n;k++) { 
			printf(" *"); 
		} 
		printf("\n"); 
	} 
}

