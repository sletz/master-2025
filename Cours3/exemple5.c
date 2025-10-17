
#include <stdio.h>

int integer_sum(int x, int y);

/*
Global and local variables.
*/

/* Global variable can be used everywhere */
float c = 100.12f;
float d = 200.34f;
 
int integer_sum(int x, int y)
{
    return x + y;
}

float floating_point_sum(float x, float y)
{
    return x + y;
}

int main()
{
    /* Local variable only usable in this function */
    int a = 10;
    int b = 20;
    
    printf("a = %d b = %d integer sum = %d\n", a, b, integer_sum(a,b));
    printf("c = %f d = %f floating point sum = %f\n", c, d, floating_point_sum(c,d));
    
    return 0;
}
