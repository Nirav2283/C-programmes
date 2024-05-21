#include<stdio.h>
int fac(int);
void main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int count=fac(a);
    printf("%d",count);
}
int fac(int a){
    int i,count=1;
    for(i=1;i<=a;i++){
        count=count*i;
    }
 return count;
} 