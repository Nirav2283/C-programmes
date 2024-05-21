#include<stdio.h>
void main(){
int i;
char a,b,str[100];
printf("enter the string: ");
gets(str);
printf("enter the character to be replaced: ");
scanf(" %c",&a);
printf("enter the new character: ");
scanf(" %c",&b);
for(i=0;str[i]!='\0';i++){
    if(str[i]==a){
        str[i]=b;
    }

}
printf("the new string is: %s\n",str);
}