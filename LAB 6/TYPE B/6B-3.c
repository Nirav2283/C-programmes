#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the first side of triangle(a): ");
    scanf("%d",&a);
    printf("Enter the second side of triangle(b): ");
    scanf("%d",&b);
    printf("Enter the third side of triangle(c): ");
    scanf("%d",&c);
    if(a==b && b==c){
        printf("it is equilateral triangle");
    }
    else if(a==b || b==c || a==c ){
        printf("it is isoceles triangle");
    }
    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        printf("it is right angled triangle");
    }
    else{
        printf("it is scalene triangle");
    }
    
    }
