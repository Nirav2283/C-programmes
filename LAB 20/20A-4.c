#include<stdio.h>
struct student{
    char name[32];
    int age;
    float per;
};
void main(){
    int i;
    struct student s[5];
    for(i=0;i<5;i++){
        printf("Enter details for student %d: \n",i+1);
        printf("Enter Name: ");
        scanf("%s",&s[i].name);
        printf("Enter age: ");
        scanf("%d",&s[i].age);
        printf("Enter Percentage: ");
        scanf("%f",&s[i].per);
    }
    printf("student Information:\n");
    for(i=0;i<5;i++){
        printf("studnet %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Percentage: %f\n",s[i].per);
        printf("\n");
         

    }
}
