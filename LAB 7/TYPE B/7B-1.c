#include<stdio.h>
void main(){
    int a,b,c,d,max;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    switch(a>=b){
        case 1:
        max=a;
        printf("%d is the largest number\n",max);
        break;
        case 0:
        max=b;
        printf("%d is the largest number\n",max);
        break;
    
    d=max*c;
    printf("multiply by largest number from %d and %d to %d is: %d ",a,b,c,d);
}
}