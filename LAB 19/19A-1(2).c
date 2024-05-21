#include<stdio.h>
int fact(int);
void main(){
    int n,f;
    printf("enter the number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of the number is= %d",f);

}
int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
