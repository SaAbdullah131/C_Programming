// Two dimensional Array
#include<stdio.h>
int main(){
    int x[2][3]={11,12,13,
                21,22,23};
     printf("%d\n",x[1][2]); // row 1 coloum 2
     
    int y=x[0][0]+x[1][1];
    printf("%d\n",y);


    return 0;
}
// Data type ArrayName[Row][coloum]