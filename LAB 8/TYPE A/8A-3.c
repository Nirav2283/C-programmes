#include<stdio.h>
void main(){
    int a,b;
    printf("enter two values: ");
    scanf("%d %d",&a,&b);
    printf("even number between %d and %d is: \n",a,b);
    while(a<=b){
        if(a%2==0){
    printf("%d\n",a);
        }
    a++;
        
    }
    }
