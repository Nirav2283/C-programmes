#include<stdio.h>
void main(){
	int i,n,sum1=0,sum2=0,h=0;
	float avg,hm;
	printf("enter size of an array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter elements of arr[%d]: ",i);
		scanf("%d",&arr[i]);
		sum1=sum1+arr[i];
		
	}
	avg=(float)sum1/n;
	for(i=0;i<n;i++){
		h=1/arr[i];
	    sum2=sum2+h;
	}
	hm=(float)n/sum2;
	printf("Avearge of the number is: %f\n",avg);
	printf("Harmonic mean of the number is: %f\n",hm);
}
