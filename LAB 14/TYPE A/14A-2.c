#include<stdio.h>
void main(){
	int n,i,pos=0,neg=0;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter elements of arr[%d]: ",i);
		scanf("%d",&arr[i]);
	if(arr[i]>=0){
		pos++;
		
	}else{
		neg++;
	}
}
	printf("count of positive number is: %d\n",pos);
	printf("count of negative number is: %d",neg);
	
}
