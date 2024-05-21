#include<stdio.h>
struct emp{
    char name[32];
    int salary;
};
void main(){
    int i,j;
    struct emp emp1[5];
    for(i=0;i<5;i++){
        printf("enter employee name: ");
        scanf("%s",&emp1[i].name);
        printf("enter employee salary: ");
        scanf("%d",&emp1[i].salary);
        
    }
    printf("Name and salary of employee is: \n");
    for(i=0;i<5;i++){
       printf("%s : %d\n",emp1[i].name,emp1[i].salary);
        

    }
    
}
