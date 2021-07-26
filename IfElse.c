// Conditions if Else 
#include<stdio.h>
int main()
{   // simple if conditions
    int x=20;
    if(x<100){ // if conditions if true ,then do all work which is in second brakets.
        printf("Hi!\n");
        printf("Hello!\n");
    }
    int y=25;
    if(x>10 && x>100){ // if & and in conditions  both conditions must be true,otherwise inside of conditions doesn't work
        printf("It's True\n");
    }
    char my_char='X';
    if(my_char==y){
        printf("x\n");//Here conditions false .So here hasn't any outpout
    }
    // If Else .When If conditions false . then it will go else block
    int ticket_price =200;
    if(ticket_price<=200){ // <= it's called less then or equal to
        printf("I will go.\n");
    }
    else
    {
        printf("I will not go.\n");
    }
    int f;
    printf("Enter Your desire Number: \n");
    scanf("%d",&f);
    if(f%3==0 || f%5==0)// % it's called modulus ..It return remainder.When we divided any number with another number.If remainder 0.That's mean it divied by that number.
       {
        printf("Your Desire Number divied by 3 or 5\n");
    }
    else{
        printf("Your desire number is not divisible by 3 or 5\n");
    }
    return 0;
}

/* || it's called or .When use or just conditions true .It's will go inside of it.
&& its called and .When use and conditions both conditions should be true .otherwise it's doesn't go inside of the conditions
*/
