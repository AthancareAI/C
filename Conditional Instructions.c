#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);


    if(a%2==0){
        printf("%d is even\n",a);
    }
    else{
        printf("%d is odd\n",a);
    }

int c;
printf("Enter a\n");
scanf("%d", &a);

(a<5)? printf("A is less than 5") : printf("A is not less than 5");
    return 0;

}

/*  Operator precedence

Priority         Operator
    1               !
    2               *, /, %
    3               +, -
    4               <,>,<=,>=
    5               ==.!=
    6               &&
    7               ||
    8               =


*/

