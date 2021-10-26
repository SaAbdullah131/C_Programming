#include<stdio.h>
// Structure define
struct employe
{
    int employeeId;
    char name[20];
    float salary;
    float creditScore;

};

int main(){

    struct employe si; // Structure variable define
    printf("Enter Your id: \n");
    scanf("%d",&si.employeeId);

    printf("Enter your name: \n");
    scanf("%s",si.name);

    printf("Enter your salary: \n");
    scanf("%f",&si.salary);

    printf("Enter your CreditScore: \n");
    scanf("%f",&si.creditScore);

    printf("Your Employe id is: %d\n",si.employeeId);
    printf("Your Name is: %s\n",si.name);
    printf("Your salary is : %f\n",si.salary);
    printf("Your creditScore is: %f\n",si.creditScore);

    return 0;
}