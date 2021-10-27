#include<stdio.h>
#include<stdlib.h>
int main(){

    int *ptr1,*ptr2;
    ptr1=(int *)malloc(5*sizeof(int));
    ptr2=(int *)calloc(5,sizeof(int));

    if (ptr1==NULL || ptr2==NULL)
    {
        printf("Memory not allocated.\n");
    }
    else{
        printf("Memory allocation is successfull.\n");
        ptr1=realloc(ptr1,50);// before size(20) not matter now 50
        printf("Memory reallocation successfull\n");
    }

    return 0;
}