#include<stdio.h>
int main()
{
    int A[5],B[5],AB[5];
    int i;
    // Take A Values from the user
    printf("Enter The Value of A: \n");

    for ( i = 0; i <5; i++)
    {
        scanf("%d",&A[i]);
    }
    
    // Take B Values from the user

    printf("Enter The Value of B: \n");

    for ( i = 0; i <5; i++)
    {
        scanf("%d",&B[i]);
    }
    
    for ( i = 0; i <5; i++)
    {
        AB[i]=A[i]+B[i];
    }
    
    // value of AB 
    printf("Value of AB Array: \n");

    for ( i = 0; i <5; i++)
    {
        printf("%d\n",AB[i]);
    }
    

    return 0;
}