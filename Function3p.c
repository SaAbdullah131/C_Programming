#include<stdio.h>
void PrintDivisor(int x){
    int i;
    for ( i = 1; i < x; i++)
    {
        if (x%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    
}

int main(){
    PrintDivisor(10);

return 0;
}