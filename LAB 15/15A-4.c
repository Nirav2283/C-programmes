#include<stdio.h>
void main(){
    int n,i,a;
    printf("enter size of array: ");
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter elements of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("enter element number to search: ");
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(arr[i]==a){
        printf("%d element found at array of %d",a,i++);
        }
        
    }
    printf("element not found");
}