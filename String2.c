#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter Your name : \n");
    scanf("%s ",name);

    int i=0,counter=0;
    while (name[i]!="\0")
    {
        counter++;
        i++;
    }
    printf("Length of name is: %d\n",counter);


    return 0;
}