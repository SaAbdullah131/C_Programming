#include<stdio.h>
#include<stdlib.h>
int main(){

    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));// (convert integer type pointer)(how much data , each data size)

    if (ptr==NULL)
    {
        printf("Memory not allocate.\n");
    }
    else{

        printf("Memory allocation sucessfull.\n");
    }


    return 0;
}