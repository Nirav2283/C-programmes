#include<stdio.h>

void main(){
float i;
printf("Enter Temperature in Farenhit:");
scanf("%f",&i);
float c=((i-32)*5)/(float)9;
printf("temperature in Celsius is:%f",c);
}