
#include <stdio.h>

/*
Control structure: choice with IF
*/

int main()
{
    int a = 20;
  
    if (a < 20) {
        printf("'a' variable is less than 20\n");
    } else {
        printf("a' variable is greater or equal to 20\n");
    }

    if (a < 20) {
        printf("'a' variable is less than 20\n");
    } else if (a == 20) {
        printf("'a' variable is equal than 20\n");
    } else {
        printf("'a' variable is greater than 20\n");
    }
    
    return 0;
}
