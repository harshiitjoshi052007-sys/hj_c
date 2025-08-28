//Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include<stdio.h>
int main()
{
    int x = 2;
    int y,z;
    y = z = 3;
    int k = 1;

    printf("The step by step evaluation is %d",3*x/y - z+k);
    //3*x/y - z+k
    //6/y- z+k
    //2 - 3 + 1
    // -1 + 1
    //0
    return 100;
}