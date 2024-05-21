#include<stdio.h>
void main(){
    //open and close a file
    FILE *fp;
    char ch;
    fp=fopen("prac.c","r");
while((ch=getc(fp))!=EOF){
    printf("%c",ch);
}

//create a file
fclose(fp);
fp=fopen("nirav2.txt","w");

}