#include<stdio.h>
#include<math.h>
void main(){
    int i=0;
    float result=0;
    while(i<=9){
        result=sqrt(i);
        printf("the root of %d is: %f\n",i,result);
        i++;

    }
}