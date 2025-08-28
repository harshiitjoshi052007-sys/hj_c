#include<stdio.h>
int main()
{
    int i = 10; //ek hi variable ki do sign nahi ho sakti
    int j = i;
    int a = 2,b = 3,c = 4,d = 5;
    printf("The value of i is %d and value of j is %d\n",i,j);
   printf("The value of a is %d and value of c is %d\n",a,c); 
   int e,f,g,h;
   e = f = g = h = 1; //we can give same value of multiple variable
   printf("g = %d",g);
   return 0;
}