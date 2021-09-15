#include<stdio.h>
int main()
{
int a[5],i,EvenSum=0, OddSum=0;
// take value from the user
printf("Enter the Value of Array: ");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&a[i]);
}
for ( i = 0; i < 5; i++)
{
    printf("%d ",a[i]);

    if (a[i]%2==0)
    
        EvenSum=EvenSum+a[i];
    else
    
        OddSum=OddSum+a[i];
    
}
    printf("\nEven Sum is: %d\n",EvenSum);
    printf("\nOdd Sum is : %d\n", OddSum);

}