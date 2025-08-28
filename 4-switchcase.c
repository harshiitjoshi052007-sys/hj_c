#include<stdio.h>
int main()
{
    int a;
    printf("Enter a:- ");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("You won nothing\n");
            break;
        case 5:
            printf("You won a Fridge\n");
            break;
        case 20:
            printf("You won a car\n");
            break;
        default:
            printf("Better luck next time\n");

    }
    return 0;
    



}