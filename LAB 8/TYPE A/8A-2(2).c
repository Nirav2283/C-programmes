#include<stdio.h>
void main(){
    int i=1,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    do{
        if(i%2!=0){
            printf("%d\n",i);
        }
        i=i+1;
    }
    while(i<=n);
}
