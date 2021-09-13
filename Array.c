// Array in C Programming
// Same type data in structured way. Which is Array in C.It's start from 0 index.Every cell work as a indepent variable

#include<stdio.h>
int main(){
    int a[3];
    a[0]=1;
    a[1]=50;
    a[2]=45;

   int x=a[0]+a[2];

    printf("Result is %d\n",x);
     a[2]=100;
     x=a[0]+a[2];
     printf("Result Second: %d\n",x);

     int b[5]={12,13,15,16,17};
     printf("Value of inex 0 is: %d\n",a[0]);
     printf("Value of index 1 is: %d\n",a[1]);
     int i;
     for ( i = 0; i<5; i++)
     {
        printf("%d\n",b[i]);
     }
     
    return 0;
}