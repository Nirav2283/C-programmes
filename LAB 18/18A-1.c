#include<stdio.h>
int add(int,int);
void main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    int ans=add(a,b);
    printf("%d",ans);

}
int add(int a,int b){
int ans;
ans=a+b;
return ans;
}
