//In C language simple mathematical rules like BODMAS no longer apply

/* OPRETOR PRECENDENCE */
//PRIORITY 1ST  * / %
//PRIORITY 2ND  + -
//PRIORITY 3RD  =

/* OPRETOR ASSOCIATIVITY */
//Follows left to right associativity
// x*y/z -------> (x*y)/z
// x/y*z --------> (x/y)*z

#include<stdio.h>
int main()   
{
    int a = 2;
    int b = 4;
    int c = 6;
    printf("The ans is %d",b*c/a*c + 10*a - a*b);
    // 24/2*c + 20 - 8
    // 12*c + 20 - 8
    // 72 + 20 - 8
    // 92 - 8
    // 84
    return 0;

}



