// Operator , presedence
#include<stdio.h>
int main(){

    int a=5; 
    int b=10;
    a+=10; //a+=10, a=a+10;
    --b;// --b=b-1; 9
    b+=10; // b=b+10,9+10=19
    int x=5;
    printf("value of x: %d\n",x++);// x=5, increse 6,print 5..x++ first value then increment 
    printf("Value of x:%d\n",++x); // ++x ,6+1=7, printf 7, ++x first increment value than print
    int u=5;
    printf("Value of x :%d\n",++u);// 6
    printf("Value of x: %d\n",u++);// 6 ,increment it 7, but not print , after another line it will print.

    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);

    //if(5>10-5 && 5)// 5>5 && 5, 0 && 5, false
    if(1 == 2 && ! = 0)
    {
        printf("Hi\n");
    }
    else{
        printf("Hello\n");
    }

    return 0;
}