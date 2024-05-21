#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,x,x1,x2,d;
    printf("enter the value of a,b,c (ax^2+bx+c)(a should not be zero): ");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b-4*a*c);
    printf("discrimenet is: %f\n",d);
    if(d==0 && a!=0){
        x=(-b)/(2*a);
        printf("Roots are equal and it is: %f",x);
    }
    else if(d>0 && a!=0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Roots are unequal and it is: %f & %f",x1,x2);
    
    }
    else if(d<0 && a!=0){
        printf("Roots are imaginary");
    }
    
}