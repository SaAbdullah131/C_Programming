#include<stdio.h>
float add(float a,float b){
    return a+b;
}
float subtract (float a,float b){
    return a-b;
}
float multiple(float a, float b){
    return a*b;

}
float divide(float a, float b){
    return a/b;
}
int main(){
    float a, b;
    printf("Enter the values of a and b: \n");
    scanf("%f%f",&a,&b);
    float addResult =add(a,b);
    float SubtractResult=subtract(a,b);
    float MultipleResult=multiple(a,b);
    float dividedResult =divide(a,b);
    printf(" Addition of two number is: %.2f\n",addResult);
    printf("Subtract of two number is: %.2f\n",SubtractResult);
    printf("Multiple of two number is: %.2f\n",MultipleResult);
    printf("Diviede of two number is: %.2f\n",dividedResult);
}