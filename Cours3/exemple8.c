
#include <stdio.h>

/*
Read input parameters
*/

int main()
{
    printf("Enter a character\n");
    char val;
    
label:
    
    val = getchar();
    
    if (val == 'a') {
        printf("The character is 'a'\n");
    } else if (val == 'b') {
        printf("he character is 'b'\n");
    } else {
        printf("Other character \n");
        goto label;
    }
    
    printf("Enter a numerical value\n");
     
    float freq;
    scanf("%f", &freq);
    
    printf("The numerical value is %f\n", freq);

    return 0;
}
