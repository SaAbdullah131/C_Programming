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
    printf(" Addition of two number is: %.2f\n",addResult);
}