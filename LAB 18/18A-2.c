#include<stdio.h>
int max(int,int);
int min(int,int);
void main(){
    int a,b;
    printf("enter 2 number: ");
    scanf("%d %d",&a,&b);
    printf("Maximum Number is: %d\n",max(a,b));
    printf("Minimum Number is: %d",min(a,b));


}
int max(int a,int b){
if(a>b){
    return a;

}else{
    return b;
}

}int min(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}