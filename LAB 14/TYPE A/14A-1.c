#include<stdio.h>
void main(){
    int i,n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter element of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("reverse order of number is: \n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}
