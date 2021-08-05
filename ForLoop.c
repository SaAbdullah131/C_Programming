// For Loop in C Programming
#include<stdio.h>
int main(){
    int i;
    for ( i = 1; i < 4; i++)
    {
        printf("Let's go\n");
    }
    int a;
    for(a=1;a<10;a+=4)// 1,5,9 so * print three times
    {
        printf("*\n");
    }
    int b;
    for ( b = 0; b < 10; ++b)
    {
        printf("%d\n",b);
    }
    int q,sum=0;
    for ( q = 30; q <=120; q++)
    {
        if (q%3==0 && q%5==0)
        {
            sum=sum+q;
        }
        
    }
    printf("Sum is:%d\n");
    

    return 0;
}