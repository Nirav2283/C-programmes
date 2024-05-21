#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("enter size of array: ");
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter element of arr[%d]: ",i);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }

    }
    printf("Negative numbers from array is: %d",count);
}