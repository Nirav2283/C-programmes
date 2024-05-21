#include<stdio.h>
void main(){
    int n,i=1,even=0,odd=0;
    printf("enter 10 numbers: \n");
    while(i<=10){
        printf("Enter number %d: ",i);
        scanf("%d",&n);
        if(i%2==0){
            even++;
        }else{
            odd++;
        }
        i++;

    }
    printf("Even number is:%d\n",even);
    printf("Odd number is:%d\n",odd);
}