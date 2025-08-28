#include <stdio.h>
int main()
{
    int a = 5; //Addition,subtraction,Multiplication,Division,Modulus are arithmetic operators
    int b = 10;
    int c = 3;
    int sum = a + b + c;
    printf("%d", sum);

    //int b = 2 , c = 3;
    //int z; z = b*c
    //int z; b*c = z

    int d = 15; // % is modulus used for remainder
    int e = 5;
    printf("The remainder of %d and %d is %d", d, e, d%e);
    return 0;

    //int i = ab; Not Allowed
    //int i = a*b Allowed
}
// % cannot be applied on float
// sign is same as numerators
//no operators to perform exponentiation 
// int d^b; NOT ALLOWED