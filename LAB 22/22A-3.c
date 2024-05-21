#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*arr,sum=0,i;
    printf("enter the number of element: ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed");
        
    }
    printf("enter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of the entered number is: %d",sum);
    
}