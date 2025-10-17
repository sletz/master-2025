 
#include <stdio.h>

/*
 Control structure: FOR loop to manipulate arrays
*/
    
int main()
{
    float table1[128];
    
    int i;
    
    for (i = 0; i < 128; i = i+1) {
        table1[i] = i * 1.0f;
    }
    
    for (i = 0; i < 128; i = i+1) {
       printf("Sample = %f\n", table1[i]);
    }
    
    float table2[10] = { 1.f, 23.f, 67.f, 100.f, 56.f, 29.f, 0.f, 7.f, 234.f, 10.f };
    
    /* Define an array with explicit values */
    float table3[10] = { 1.f, 23.f, 67.f, 100.f, 56.f, 29.f, 0.f, 7.f, 234.f, 10.f };
    for (i = 0; i < 10; i = i+1) {
       printf("Value = %f\n", table3[i]);
    }
    
    return 0;
}
