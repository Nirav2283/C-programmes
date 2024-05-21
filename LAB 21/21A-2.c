#include<stdio.h>
void main(){
    FILE *p;
    char c;
    int sp=0,tb=0,nl=0,cha=0;
    p=fopen("nirav.txt","r");
    c=getc(p);
    while(c!=EOF){
        if(c==' '){
            sp++;
        }
        else if(c=='\t'){
             tb++;
        }
       if(c=='\n'){
        nl++;
       }
       else{
        cha++;
       }
       c=getc(p);

    }
    fclose(p);
    printf("space=%d\n",sp);
    printf("tabs=%d\n",tb);
    printf("new lines=%d\n",nl);
    printf("charcters=%d\n",cha);
    
}