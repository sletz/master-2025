 
#include <stdio.h>
#include <math.h>

void square1()
{
    float table[100];
    
    // 1° version with 2 loops to fill the 2 parts of the signal
    int i;
    for (i = 0; i < 50; i = i+1) {
        table[i] = 1.0;
    }
    
    for (i = 50; i < 100; i = i+1) {
        table[i] = -1.0;
    }
    
    printf("Square1\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Index = %d Sample = %f\n", i, table[i]);
    }
}

void square2()
{
    float table[100];
    
    // 2° version with 1 loop and a 'if'
    int i;
    for (i = 0; i < 100; i = i+1) {
        if (i < 50) {
            table[i] = 1.0;
        } else {
            table[i] = -1.0;
        }
    }
    
    printf("Square2\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Index = %d Sample = %f\n", i, table[i]);
    }
}

void sawtooth1()
{
    float table[100];
    int i;
    
    // First version that directly uses the i variable to compute the value at each step
    for (i = 0; i < 100; i = i+1) {
        table[i] = (float)i/100.0;
    }
    
    printf("sawtooth1\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Index = %d Sample = %f\n", i, table[i]);
    }
}

void sawtooth2()
{
    float table[100];
   
    // Second version first computes the increment step to be used at each step in the loop
    float step = 1.0/100;
    float value = 0.0;
    
    int i;
    for (i = 0; i < 100; i = i+1) {
        table[i] = value;
        value = value + step;
    }
    
    printf("sawtooth2\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Index = %d Sample = %f\n", i, table[i]);
    }
}

float PI = 3.141572653;

void sinus()
{
    float table[100];
    int i;
    
    // Multiply the sawtooth signal (thus in the [0..1] range) to 2*PI (thus in the [0..2*PI] range), then call the 'sin' function
    for (i = 0; i < 100; i = i+1) {
        table[i] = sin(2 * PI * (float)i/100.0);
    }
 
    printf("sinus\n");
    for (i = 0; i < 100; i = i+1) {
        printf("Sample = %f\n", table[i]);
    }
}

int main()
{
    square1();
    square2();
    sawtooth1();
    sawtooth2();
    sinus();
    
    return 0;
}
