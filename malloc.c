#include<stdio.h>
#include<stdlib.h>
int main(){

int *ptr;
ptr=(int *)malloc(5*sizeof(int));// each integer 4 byter so here we allocate 20 byte sized

if (ptr==NULL)
{
    printf("Memory not Allocated\n");
}
else
{
    printf("Memory allocation successful.\n");
}


return 0;
}