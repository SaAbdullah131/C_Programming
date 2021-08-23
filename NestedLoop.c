// Nested Loop in C Programming. When one loop stay inside of another loop it's siuation called Nested Looping.

#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <=3; i++)
    {
        printf("Outside of the Loop\n");
        for ( j = 1; j <=2; j++)
        {
            printf("Inside of Loop\n");
        }
     
        
    }
    for (int k = 1; k <=2; k++)
    {
        for (int l = 1; l <=3; l++)
        {
            for (int m = 1; m <=5; m++)
            {
                printf("Hi-\n");
            }
            
        }
        
    }
    
    for (int q =1; q<=5; q++) // for line printing
    {
        for (int w = q; w <=5; w++) // for star printing
        {
            printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}