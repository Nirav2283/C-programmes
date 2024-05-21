#include<stdio.h>
void main(){
    int n,i;
    printf("enter size of an array: ");
    scanf("%d",&n);
    int arr[n],*ptr[n];
    
    for(i=0;i<n;i++){
        printf("enter elements of arr[%d]: ",i);
        scanf("%d",&arr[i]);
        

    }
    for(i=0;i<n;i++){
        ptr[i]=&arr[i];
        printf("%d\n",*ptr[i]);
    }
    
}