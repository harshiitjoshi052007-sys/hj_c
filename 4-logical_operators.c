/*&& (AND) → is true when both the conditions are true
a. “1 and 0” is evaluated as false.
b. “0 and 0” is evaluated as false.
c. “1 and 1” is evaluated as true.
2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1)*/

#include<stdio.h>
int main()
{
    int a = 3; int b = 0; // 1 ko true 0 ko false
    printf("The value of a and b is %d\n",a&&b);
    printf("The value of a or b is %d\n",a||b);
    
    int s = 5;int e = 10;int x = 10;
    if(s==x&&x==e){
            printf("s=e\n");}
    else{
        printf("s!=e\n");}

        if(a&&b){
            printf("Both are True\n");
        }
        else{
            printf("It is False");
        }
        //we can write like this
        if(a){
            if(b){
                printf("Both are true\n");
            }
        }
    

printf("The value of not(s) is %d\n\n",!s);

    return 0;
}