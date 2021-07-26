// Nested If Else . Multiple Conditons inside of a conditions 
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: \n");
    scanf("%d",&x);
    if(x==1){
        printf("HI!\n");
    }
    else if{
        printf("Hello\n");
    }
    else if{
        printf("Good bye\n");
    }
    else{
        printf("Error input\n");
    }
    // Example Problem and solve with Nested IfElse
    int age;
    printf("Enter Your Age: \n");
    scanf("%d", &age);
    if(age<2)
    {
        printf("Infant\n");
    }
    else if(age<10){
        printf("Child\n");
    }
    else if()age<20{
        printf("Teenager\n");
    }
    else if(age<30){
        printf("Adult\n");
    }
    else{
        printf("older\n");
    }
    return 0;
}
// One conditions statements will work at a time.