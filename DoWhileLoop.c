// Do while Loop in C Programming

#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("Let's go!\n");
        i++;
    } while (i<=2){
        printf("%d\n",i);
    }
    int a=100;
    do
    {
        printf("%d\n");
        i+=5;
    } while (i<=0){
        printf("%d\n");
    }
    
    // Do while loop .First Do and then check
    return 0;
}