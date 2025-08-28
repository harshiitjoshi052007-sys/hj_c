//Relational opreators are used to evalute conditions(True or False) inside the statements
// == equals
// >= Greater then equal to
// != not equal to
//= is used for assignment whereas == for equality check

/*The condition can be any valid expression in C is a non zero value considered to be True*/

#include<stdio.h>
int main()
{
    if(1){
        printf("This if is executed\n");
    }
    if(456){
        printf("This if is also executed\n");
    }
 if('a'){
        printf("This if is also also executed\n");
    }
    
    if(0){
        printf("This is executed");
    }
    return 0;
}