#include<stdio.h>
void main(){
    int i=1,n;
    printf("square of the numbers between 1 to 10\n");

    while(i<=10){
        n=i*i;
        printf("%d^2=%d \n",i,n);
        i++;
    }
}