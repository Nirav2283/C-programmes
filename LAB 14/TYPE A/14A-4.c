#include<stdio.h>
void main(){
	int n,i;
	printf("enter size of an array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter element of arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int max=arr[0],min=arr[0],sum=0;
	float avg;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}else if(arr[i]<min){
			min=arr[i];
		}
		sum=sum+arr[i];
	}
	avg=(float)sum/n;
	printf("Maximum Number is: %d\n",max);
	printf("Minimum Number is: %d\n",min);
	printf("Sum of this number is: %d\n",sum);
	printf("Average of this number is: %d",avg);
}
