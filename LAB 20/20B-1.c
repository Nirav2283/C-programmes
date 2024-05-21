#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    float marks;
};
void main(){
    struct student *stdptr,s1;
    stdptr=&s1;
    printf("Enter name: \n");
    scanf("%s",stdptr->name);
    printf("Enter roll no: \n");
    scanf("%d",&stdptr->rollno);
    printf("Enter a marks: \n");
    scanf("%f",&stdptr->marks);
    printf("\n");


printf("Name: %s\n",stdptr->name);
printf("roll no: %d\n",stdptr->rollno);
printf("marks: %f\n",stdptr->marks);

}