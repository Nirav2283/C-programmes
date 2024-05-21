#include<stdio.h>
void main(){
    char ch;
    printf("Enter Any character:");
    scanf(" %c",&ch);
    if(ch>=65 && ch<=90){
        printf("Alphabet is upper case");
    }
    
    else if(ch>=97 && ch<=122){

        printf("Alphabet is lower case");
        }
        else{
            printf("Special Character");
        }
}
        

    

