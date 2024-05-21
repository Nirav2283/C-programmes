#include<stdio.h>
void main(){
    char ch;
    int c;
    printf("enter an character: ");
    scanf("%c",&ch);
    c=(ch>=65 && ch<=90 || ch>=97 && ch<=122)?printf("charcter is alphabet"):printf("not alphabet");

}

    
