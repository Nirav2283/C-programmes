#include<stdio.h>
void fibbo(int,int,int,int);
void main(){
    int n;
    int p1=0,p2=1;
    int p3=p1+p2;
    printf("enter the range: ");
    scanf("%d",&n);
    printf("%d %d ",p1,p2);
    fibbo(n,p1,p2,p3);
    
}
void fibbo(int n,int p1,int p2,int p3){
    int i,p4;
    	for(i=3;i<=n;i++){
		printf("%d ",p3);
		p1=p2;
		p2=p3;
		p3=p1+p2;
        
	}
    
    
}