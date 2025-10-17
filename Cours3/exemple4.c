
#include <stdio.h>

/*
Function definition and function call.
*/

float floating_point_sum(float x, float y)
{
    float res = x + y;
    return res;
}

int integer_subtraction(int x, int y)
{
    return x - y;
}

void function1()
{
    printf("===========\n");
    printf("Example4\n");
    printf("Example4\n");
    printf("Example4\n");
}

int main()
{
    function1();
    
    printf("integer subtraction = %d\n", 30-5);
    
    printf("integer subtraction of %d and %d is %d\n", 10, 20,
           integer_subtraction(10, 20));
    
    int a = 100;
    int b = 23;
    
    printf("integer subtraction of %d and %d is %d\n", a, b,
           integer_subtraction(a, b));
    
    int res2 = integer_subtraction(50, 14);
    printf("res2 = %d\n", res2);
    
    float res1 = floating_point_sum(10, 20);
    printf("res1 = %.1f\n", res1);
    return 0;
}
