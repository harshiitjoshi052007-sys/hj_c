#include<stdio.h>
int main()
{
    int age = 18;
    if(age>60){
        printf("You can drive but you are a senior citizen");
    }

        else if(age>18){
            printf("You can drive");
        }

        else if(age==18){
            printf("You can drive but drive license kaadh");
        }

        else{
            printf("You cannot drive"); //else nahi rehega to bhi chal sakta hai
        }
        return 0;
          
}