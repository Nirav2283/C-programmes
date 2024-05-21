#include<stdio.h>
int main(){
    int n=1,i=0;
    printf("the first 50 number in the series 1,4,7,10....are:\n ");
    while(i<=50){
        printf("%d\n",n);
        n=n+3;
        i++;
         

    }
    
    return 0;
}