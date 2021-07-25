// User Input in C programming
#include<stdio.h>
int main()
{
    // Start Taking Input from user
    /* Take One input from user
    int a;
    printf("Enter Any Number: \n");
    scanf("%d",&a);
    printf("User Enter Value is:%d\n",a);
    */
    // Take Multiple Input from user
    // int x,y;
    // printf("Enter Value of X and Y :\n");
    // scanf("%d %d",&x,&y);
    // printf("Your Entered Value is: %d and %d\n",x,y);
     // end of basic of user input
     float a,b,c,sum,average;
     printf("Enter Three Number: \n");
     scanf("%f %f %f ",&a,&b,&c);

     sum=(a+b+c);
     average=sum/3;

     printf("Value of a is: %d\n",a);
     printf("Value of b is: %d\n",b);
     printf("Value of c is: %d\n",c);

     printf("Total sum of Your Entered Number is: %f\n",sum);
     printf("Average of Entered Value is : %f\n",average);
    return 0;
}
