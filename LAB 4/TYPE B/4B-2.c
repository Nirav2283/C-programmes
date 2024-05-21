#include<stdio.h>
void main(){
int p,r,t;
printf("Enter The value Of Principle:");
scanf("%d",&p);
printf("Enter The rate:");
scanf("%d",&r);
printf("Enter Thet time:");
scanf("%d",&t);
float d=(p*r*t)/(float)100;
printf("The simple interest is:%f",d);


}