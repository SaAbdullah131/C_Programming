#include<stdio.h>

void EvenOrOdd(int n){
    if (n%2==0)
    {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }


}
int main(){

    EvenOrOdd(1);
    return 0;
}