#include<stdio.h>
void main(){
    int i=101;
    printf("integer value between 101 and 200 which is divsible by 7 and not by 5 is: \n");
    while(i<=200){
        if(i%7==0 && i%5!=0){
            printf("%d\n",i);
        }
        i++;
    }
}