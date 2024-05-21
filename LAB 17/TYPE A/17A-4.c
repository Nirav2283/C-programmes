#include<stdio.h>
void main(){
    float a,b,temp,*p,*ptr;
    printf("enter value of a: ");
    scanf("%f",&a);
    printf("enter value of b: ");
    scanf("%f",&b);
    p=&a;
    ptr=&b;
    temp=*p;
    *p=*ptr;
    *ptr=temp;+
    printf("swaped numbers: \n");
    printf("value of a=%f\n",*p);
    printf("value of b=%f",*ptr);

}