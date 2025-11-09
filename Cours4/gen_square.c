
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* Square generator */

float* table_square;
int table_size_square;
int phase_square;

/* Create and fill the table with a period of the signal */
void init_square(int sample_rate, int freq)
{
    table_size_square = (int)((float)sample_rate / (float)freq);
    printf("table_size_square: %d\n", table_size_square);
    
    /* Table dynamic allocation */
    table_square = (float*)malloc(table_size_square * sizeof(float));
    
    /* Fill the table */
    // TODO

    /* Init the phase */
    phase_square = 0;
}

void destroy_square()
{
    /* Deallocate the table */
    free(table_square);
}

/* Copy 'nframes' samples from the table inside the output buffer and update the phase */
void process_square(float* output, int nframes)
{
    // TODO
}

void display_table_square()
{
    // TODO
}

int main()
{
    init_square(44100, 800);
    display_table_square();
    
    // Simulate audio generation: generate a sequence of 500 samples
    printf("==================\n");
    printf("Simulate audio\n");
    
    // TODO
    
    return 0;
}
