#include<stdio.h>
void main(){
    int sum=0,n,no,i=1;
    printf("Enter avg of how many numbers you want: ");
    scanf("%d",&n);
    printf("Enter Numbers: \n");
    while(i<=n){
        scanf("%d",&no);
        sum=sum+no;
        i++;
    }
    printf("average is: %d\n",sum/n);
    printf("sum is: %d",sum);
}