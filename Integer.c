#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b,x;
    a=10;
    b=3;

    // Minimum and Maximum limit of integer and long long integer
    
    printf(" Limit of integer is: %d\n",INT_MIN);
    printf(" Limit of integer is: %d\n",INT_MAX);

     printf(" Limit of  long long integer is: %d\n",LONG_MIN);
      printf(" Limit of long long integer is: %d\n",LONG_MAX);
    // End of Minimum and Maximum limit of integer and long long integer
    printf("Size of integer in my computer: %d\n",sizeof(int));
    printf("Result is : %d\n",a+b);
    printf(" Result is By Divided: %d\n",a/b);// 10/3=3.3333,but here just 3 show ,because a & b integer.so it's holds integer value only.
    printf("Remainder : %d\n",a%b);// %=modulus .It's just give you Remainder.Here 10/3=3.333 .Remainder 1
    x=2147483647;
    long long int y=2147483648;
    printf("%d\n",x);
    printf("%lld\n",y);// %lld is placeholder of long long integer. It's  return -value.Because it's over the limited value of integer. That's why integer can't hold it and return as garbage value. when use long long integer .It can hold this value.
    return 0;
}
 