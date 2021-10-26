#include<stdio.h>

struct student{
    int id;
    float cgpa;
    char name[20];
};

int main(){

    struct student s;
    printf("Enter your id: \n");
    scanf("%d",&s.id);

    printf("Enter your cgpa: \n");
    scanf("%f",&s.cgpa);

    printf("Enter your name: \n");
    scanf("%s",s.name);
    
    printf("Your name is :%s\n",s.name);
    printf("Your id is: %d\n",s.id);
    printf("Your cgpa is: %.2f",s.cgpa);

    return 0;
} 