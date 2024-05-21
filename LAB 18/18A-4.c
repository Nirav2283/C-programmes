#include<stdio.h>
float max(float a,float b,float c);
void main(){
	float a,b,c;
    printf("enter 3 numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	float n=max(a,b,c);
	printf("Maximum Number is: %f",n);
}
float max(float a,float b,float c){
	float n;
	n=(a>b)?(a>c?a:c):(b>c?b:c);
	return n;
}
