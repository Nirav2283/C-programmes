#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("nirav2.txt","a");
    fprintf(fp,"%c",'M');
    fprintf(fp,"%c",'A');
    fprintf(fp,"%c",'N');
    fprintf(fp,"%c",'G');
    fprintf(fp,"%c",'O');
}