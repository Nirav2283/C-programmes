#include<stdio.h>
void main(){
	int i,n,even=0,odd=0;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	printf("enter element of arr[%d]: ",i);
	scanf("%d",&arr[i]);
	if(arr[i]%2==0){
		even++;
	}else{
		odd++;
	}
}
printf("count of even numbers: %d\n",even);      
printf("count of odd numbers : %d",odd);
}
