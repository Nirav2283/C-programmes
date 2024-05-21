#include<stdio.h>
void main(){
float u;
printf("enter consumed units: ");
scanf("%f",&u);
if(u<=50){
printf("total bill: %f",(u*0.50)+(u*0.50*20)/(float)100);
}
else if(u>50 && u<=150){
    printf("total bill: %f",(50*0.50)+(u-50)*0.75+((50*0.50)+(u-50)*0.75)*20/(float)100);
}
else if(u>150 && u<=250){
    printf("total bill: %f",(50*0.50)+(100*0.75)+(u-150)*1.20+((50*0.50)+(100*0.75)+(u-150)*1.20)*20/(float)100);
}
else if(u>250){
    printf("total bill: %f",(50*0.50)+(100*0.75)+(100*1.20)+(u-250)*1.50+((50*0.50)+(100*0.75)+(100*1.20)+(u-250)*1.50)*20/(float)100);
}
}