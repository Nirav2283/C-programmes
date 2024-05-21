#include<stdio.h>
void main(){
int n,c;
printf("enter the year: ");
scanf("%d",&n);
if(n%4==0 && n%100!=0 || n%400==0){
    printf("%d is the leap year\n",n);
}else{
    printf("%d is not the leap year\n",n);
}
int m;
printf("enter the month number(1-12): ");
scanf("%d",&m);
switch(m){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("month have 31 days");
break;
case 4:
case 6:
case 9:
case 11:
printf("month have 30 days");
break;
case 2:
c=(n%4==0 && n%100!=0)||(n%400==0)?29:28;
printf("month have %d days",c);
break;
default:
printf("invalid number");
break;
}
}

