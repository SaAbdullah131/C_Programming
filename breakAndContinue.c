// Break and Continue statement
#include<stdio.h>
#include<math.h>
int main(){
    // break statement
    int i;
    for ( i = 0; i < 3; i++)
    {   
        printf("HI\n");
        if(i==1)
        break;
        printf("Hello\n");
    }
    printf("\n");
    // continue Statment 
    int j;
    for ( j = 0; j < 3; j++)
    {
        printf("Hi\n");
        if (j==1)
    
            continue;
        
        printf("Hello\n");
    }
    


    return 0;
}