#include<stdio.h>
#include<math.h>
void main(){
    int n,count=1,m,sum=0,x;
    float po;
    printf("Enter number: ");
    scanf("%d",&n);
    m=n;
    while(n!=0){
    x=n%10;
    count++;
    n=n/10;
    }
    printf("%d",count);
    n=m;
    while(m!=0){
        x=m%10;
        po=pow(x,count);
        printf("%f\n",po);
        sum=sum+po;
        m=m/10;
        

    }
    if(sum==n){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
    
}