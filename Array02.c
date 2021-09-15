#include<stdio.h>
int main()
{
    int a[7]={-97,45,100,37,89,-327,245};
    int max=a[0],i;
    
    printf("\n");
    for ( i = 0; i < 7; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    printf("Max Value is: %d\n",max);
    

    return 0;
}