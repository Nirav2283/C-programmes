#include<stdio.h>
void main(){
    int arr[3][3],i,j,pos=0,neg=0,zero=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter array element: ");
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>0){
                pos++;
            }else if(arr[i][j]<0){
                neg++;
            }else{
                zero++;
            }
        }
    }
    printf("positive numbers: %d\n",pos);
    printf("negative numbers: %d\n",neg);
    printf("zero numbers: %d\n",zero);
}