// While Loop in C Programming
#include<stdio.h>
int main()
{
    int x=1;
    while (x<=5)
    {
        printf("Hi\n");
        printf("Hello\n");
        x+=2;
    }
    int a=2;
    while (a>1)
    {
        printf("Value of a %d\n"); // infinity loop
        a++;
    }
    


    return 0;
}
// while(1) it's mean it's always true. It's a infinity loop.. 
// Infinity loop doesn't false .