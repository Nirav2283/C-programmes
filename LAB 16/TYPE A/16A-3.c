#include<stdio.h>
void main(){
    int marks[5][2],i,j;
    printf("enter roll no and marks respectively: \n");
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            
            scanf("%d",&marks[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            printf("%d ",marks[i][j]);
        }
        printf(" \n");
    }
}