// C Program to print the Floyd's Triangle 
#include <stdio.h> 

int main() 
{ 
	int i,j; 
	int n = 1; 

	// outer loop to print all rows 
	for (i = 0; i < 5; i++) { 

		// innter loop to print abphabet in each row 
		for (j = 0; j <= i; j++) { 
			printf("%d ", n++); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

