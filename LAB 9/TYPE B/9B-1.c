#include<stdio.h>
void main(){
    char i='a';
    printf("lower case alphabets:\n");
    while(i>='a'&& i<='z'){
       printf("%c ",i);
       i++;
    }
    char c='A';
    printf("\nupper case alphabet:\n ");
    while(c>='A'&& c<='Z'){
    printf("%c ",c);
    c++;
    }
    
}