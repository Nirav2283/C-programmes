#include<stdio.h>
void main(){
    float a,b;
    printf("Enter Two numbers:");
    scanf("%f %f",&a,&b);
    char ch;
    printf("Enter an operator(+ for addition , - for substraction , * for multiplication , / for division):");
    scanf(" %c",&ch);
    if(ch=='+'){
        printf("addition is:%f",a+b);
    }
        if(ch=='-'){
            printf("substraction of number is:%f",a-b);
        }
        if(ch=='*'){
            printf("Multiplication of number is:%f",a*b);
        }
        if(ch=='/'){
            printf("Division of number is:%f",a/b);
        
        }
    
        }
