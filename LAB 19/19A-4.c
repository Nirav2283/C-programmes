#include<stdio.h>
void main(){
    int i=0,b=0;
    char str[20],a;
    printf("enter the string: ");
    scanf("%s",&str);
    printf("enter a charcter to find: ");
    scanf(" %c",&a);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==a){
            b=1;
        }
    }
    if(b){
        printf("charcter found in the string");
    }
    else{
        printf("charcter not found in the string");
    }
}