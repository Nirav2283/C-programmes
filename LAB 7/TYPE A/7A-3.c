#include<stdio.h>
void main(){
    float a,b;
    printf("enter the two numbers: ");
    scanf("%f %f",&a,&b);
    int n;
    printf("Enter a number (1-4)(1 for addition , 2 for substraction , 3 for multiplication , 4 for division): ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("addition of the number is: %f",a+b);
        break;
        case 2:
        printf("substraction of the number is: %f",a-b);
        break;
        case 3:
        printf("multiplication of the number is: %f",a*b);
        break;
        case 4:
        printf("divison of the number is: %f",a/b);
        break;
        default:
        printf("invalid number");
        break;

    }
}