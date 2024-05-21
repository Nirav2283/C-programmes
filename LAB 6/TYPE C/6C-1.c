#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        if(b>c){
            printf("second largest number is %d",b);
        }else{
            printf("second largest number is %d",c);
        }
    }
    if(b>a && b>c){
        if(a>c){
            printf("second largest number is %d",a);
        }else{
            printf("second largest number is %d",c);
        }
    }else{
        if(a>b){
            printf("second largest number is %d",a);
        }else{
            printf("second largest number is %d",b);
    }
    }
}

    
