#include<stdio.h>
int main()
{
    printf("Let's see size of Float and Double:\n\n");
    printf("Size of Float: %d\n",sizeof(float));
    printf("Size of Double: %d\n",sizeof(double)); // Double is double than floating point number.
    float a,b;
    a=5.5;
    b=3.3;
    printf(" Result is: %f\n",a/b);
    printf(" Result is : %.2f\n",a/b);// when you need to print just two pointing value after an integer.
    double x,y,z;
    x=10;
    y=12;
    z=15;
    printf("Double Value Result: %lf\n",x*y*z);// print Double floating value after integer valuers.
    return 0;
}