#include<stdio.h>
void main(){
    int n,*p;
    printf("enter any value: ");
    scanf("%d",&n);
    p=&n;
    printf("%d\n",*p);

    char m,*ptr;
    printf("enter any number: ");
    scanf(" %c",&m);
    ptr=&m;
    printf("%c\n",*ptr);

    float h,*pptr;
    printf("enter any number: ");
    scanf("%f",&h);
    pptr=&h;
    printf("%f\n",*pptr);

   double a,*ptrr;
   printf("enter any number: ");
   scanf("%lf",&a);
   ptrr=&a;
   printf("%lf\n",*ptrr);

}
