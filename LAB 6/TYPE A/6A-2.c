#include<stdio.h>
void main(){
    int s;
    printf("enter a basic salary:");
    scanf("%d",&s);

    if(s >= 10000 && s < 20000){
        printf("Gross salary is: %f",(0.2*s+0.8*s+s));
    }
    if(s >= 20000 && s < 30000){
        printf("Gross salary is: %f",(0.25*s+0.9*s+s));
    }
    if(s>=30000){
        printf("Gross salary is:%f",(0.30*s+0.95*s+s));
    }

}
