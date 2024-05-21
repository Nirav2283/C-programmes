#include<stdio.h>
void main(){
    int df,cpc,ic,phy,es;
    printf("enter the marks of each subject:");
    scanf("%d %d %d %d %d",&df,&cpc,&ic,&phy,&es);
    float p;
    p=((df+cpc+ic+phy+es)*100)/(float)500;
    printf("percentage is:%f\n",p);
    if(p<=35){
        printf("congratulations! You are fail");
    }
        if(p>=36 && p<=45){
            printf("pass class hurray!");
        }
            if(p>=46 && p<=60){
                printf("second class moj kro");
            }
                if(p>=61 && p<=70){
                    printf("first class yeahhhhh!!!");
                }
                    if(p>70){
                        printf("distniction class");
                    }

                }
            

        
    
