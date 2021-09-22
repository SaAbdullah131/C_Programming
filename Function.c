#include<stdio.h>

int GetSum(int x,int y){
    int sum=x+y;
    return sum;
}
 void SayHi(){
    printf("Hi\n");

}
int main()
{   
    printf("Main Start:\n");
    SayHi();
    return 0;
}