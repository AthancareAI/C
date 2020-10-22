#include <stdio.h>
/* do {
      code
      code
      }while(condition)
*/

/*
do while loop:- executes the code and checks the condition
while loop:- checks the condition and then executes the code

*/
int main(){
    int i =200 ;
    do{
        printf("The value of i is %d\n",i);
        i++;
    }while(i<10);

    return 0;
}
