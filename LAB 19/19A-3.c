#include<stdio.h>
#include<string.h>
void main(){
    char s1[32],s2[32];
    printf("enter string 1: ");
    gets(s1);
    printf("enter string 2: ");
    gets(s2);
    printf("length of string 1 is: %d\n",strlen(s1));
    printf("length of string 2 is: %d\n",strlen(s2));
    printf("%s\n",strlwr(s1));
    printf("%s\n",strrev(s1));
    printf("%s\n",strncat(s1,s2,3));
    printf("%s\n",strupr(s2));

}