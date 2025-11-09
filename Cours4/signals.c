 
#include <stdio.h>
#include <math.h>

void square()
{
    float table[100];
    int i;
    
    // 1° version with 2 loops to fill the 2 parts of the signal
    
    // 2° version with 1 loop and a 'if'
    
    printf("Square\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Sample = %f\n", table[i]);
    }
}

void sawtooth()
{
    float table[100];
    int i;
    
    // TODO
    
    printf("sawtooth\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Sample = %f\n", table[i]);
    }
}

void sinus()
{
    float table[100];
    int i;
    
    // TODO
    
    printf("sinus\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Sample = %f\n", table[i]);
    }
}

int main()
{
    square();
    sawtooth();
    sinus();
    
    return 0;
}
