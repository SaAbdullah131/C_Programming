// Nested Loop in C Programming. When one loop stay inside of another loop it's siuation called Nested Looping.

#include<stdio.h>
int main(){
    int i,j;
    for ( i = 0; i <=5; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    


    return 0;
}