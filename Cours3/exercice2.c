 
#include <stdio.h>

/*
 Control structure: using FOR loop to manipulate arrays
*/
    
int main()
{
    /* Define an array with explicit values */
    float table1[10] = { 1.f, 23.f, 67.f, 100.f, 56.f, 29.f, 0.f, 7.f, 234.f, 10.f };
    
    int i = 0;
    
    float sum1 = 0.0;
    
    // TODO: compute the sum of all values on the array
    for (i = 0; i < 10; i = i+1) {
        sum1 = sum1 + table1[i];
    }
    
    printf("Sum = %f\n", sum1);
    
    /* Define an array with explicit values */
    float table2[10] = { 1000.f, 230.f, 67.f, 1000.f, 56.f, 290.f, 0.f, 7.f, 234.f, 10.f };
    
    // TODO: compute the mean of all values on the array
    float sum2 = 0.0;
    
    for (i = 0; i < 10; i = i+1) {
        sum2 = sum2 + table2[i];
    }
     
    printf("Mean = %f\n", sum2/10);
   
    /* Define an array with explicit values */
    float table3[10] = { 1.f, 23.f, 67.f, 100.f, -56.f, 29.f, 0.f, 7.f, 234.f, 10.f };
    
    float minimum = table3[0];
    float maximum = table3[0];
    
    // TODO: compute the maximum and minimum of all values on the array
    for (i = 0; i < 10; i = i+1) {
        
        if (table3[i] < minimum) {
            minimum = table3[i];
        }
        if (table3[i] > maximum) {
            maximum = table3[i];
        }
    }
           
    printf("Minimum = %f\n", minimum);
    printf("Maximum = %f\n", maximum);
    
    return 0;
}
