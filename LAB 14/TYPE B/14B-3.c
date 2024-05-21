#include<stdio.h>
void main(){
	int i,n,j,temp;
	printf("enter size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter element in arr[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\narrays in ascending order are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
