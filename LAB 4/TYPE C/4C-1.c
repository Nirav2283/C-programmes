#include<stdio.h>

void main(){
int h,m,s;
printf(" Please Enter seconds: ") ;
scanf("%d",&s);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;
printf("HH:MM:SS: %d:%d:%d",h,m,s);
}
