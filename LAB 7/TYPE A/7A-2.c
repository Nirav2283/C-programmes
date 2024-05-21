#include<stdio.h>
void main(){
    int n;
    printf("enter a number(1-12)(e.g. 1 for january): ");
    scanf("%d",&n);
    switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("month have 31 days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("month have 30 days");
        break;
        case 2:
        printf("month have 28/29 days");
        break;
        default:
        printf("invalid number");
        break;

    }
}