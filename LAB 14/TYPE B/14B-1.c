#include<stdio.h>
void main(){
	int i,n,sum=0,count=0;
    float avg;
	printf("enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter element of arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("Avearge of the number is: %f\n",avg);
    for(i=0;i<n;i++){
        if(avg < arr[i]){
            count++;
        }
    }
    printf("number higher than the average: %d",count);
}