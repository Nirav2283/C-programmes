#include<stdio.h>
void main(){
    int n,i;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n],b[n],*ptr[n];
    for(i=0;i<n;i++){
        printf("enter element of arr[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("element of array b: ");
    for(i=0;i<n;i++){
        ptr[i]=&a[i];
        b[i]=*ptr[i];
        printf("%d\n",*ptr[i]);

    }
}