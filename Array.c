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

    return 0;
}