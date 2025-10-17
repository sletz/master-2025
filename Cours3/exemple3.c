
#include <stdio.h>

/*
Types conversion.
*/

int main()
{
    float a = 34.14f;
    float b = 1.83456f;
    
    printf("a = %f b = %f \n", a, b);  // By default, 6 decimals are displayed
    
    // Print with a choosen number of decimals
    printf("a = %.2f b = %.3f \n", a, b);
    
    int c = (int)a;
    int d = b;
    
    printf("c = %d d = %d \n", c, d);
    
    int e = 12345;
    int f = 2575;
    
    float g = (float)e;
    float h = f;
    
    printf("g = %f h = %f \n", g, h);
    
    return 0;
}
