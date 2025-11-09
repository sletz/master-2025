
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* Sawtooth generator */

float* table_sawtooth;
int table_size_sawtooth;
int phase_sawtooth;

/* Create and fill the table with a period of the signal */
void init_sawtooth(int sample_rate, int freq)
{
    table_size_sawtooth = (int)((float)sample_rate / (float)freq);
    printf("table_size_sawtooth: %d\n", table_size_sawtooth);
    
    /* Table dynamic allocation */
    table_sawtooth = (float*)malloc(table_size_sawtooth * sizeof(float));
    
    /* Fill the table */
    // TODO

    /* Init the phase */
    phase_sawtooth = 0;
}

void destroy_sawtooth()
{
    /* Deallocate the table */
    free(table_sawtooth);
}

/* Copy 'nframes' samples from the table inside the output buffer and update the phase */
void process_sawtooth(float* output, int nframes)
{
    // TODO
}

/* Return 1 sample and update the phase */
float process_one_sample_sawtooth()
{
    // TODO
}

void display_sawtooth()
{
    // TODO
}

int main()
{
    init_sawtooth(44100, 200);
    display_sawtooth();
    
    // Simulate audio generation: generate a sequence of 500 samples
    printf("==================\n");
    printf("Simulate audio\n");
    
    // TODO
}
