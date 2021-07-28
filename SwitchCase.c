// SwitchCase in C Programming
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Your Desire Number: \n");
    scanf("%d",&x);
    // Swtich Case. When one case .it's mean that case is true .Then inside of value of that case is print.After Printf that case break.
    switch (x)
    {
    case 1:/* constant-expression */
        /* code */
        printf("Value is 1\n");
        break;
    case 2:
    printf("Value is 2\n");
    break;
    
    case 3:
    printf("Value is 3\n");
    break;

    case 4+4: // when case value is 8 then it's true and print inside of it
    printf("Value is 8\n");
    break;

    default:
       printf("Not a match value\n");
    } 

    return 0;
} 

/*When using switch case. Two case aren't same 

*/