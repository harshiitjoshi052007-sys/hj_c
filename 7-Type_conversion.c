//int and int ------->int
//int and float -------->float
//float and float ------->float

#include<stdio.h>
int main()
{
    float a = 9.0;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is %f",c);

    int d = 6.7; //It will print 6 because int cannot store floats
    printf("The value of d is %d",d);
    return 0;
}

/*
9/2 becomes 2 when the 2 numbers are integer
9.0/2 becomes 4.5 when 1 number is float
2/9 becomes 0 when 2 numbers are int*/