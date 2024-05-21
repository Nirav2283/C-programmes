#include<stdio.h>
void main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n==0){
        printf("Binary Representation : 0000");

    }
    int arr[32],i=0,j=i-1;
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    printf("Binary representation: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);

}
printf("\n");
}