 
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* Sinus generator */

float* table_sinus;
int table_size_sinus;
int phase_sinus;

/* Create and fill the table with a period of the signal */
void init_sinus(int sample_rate, int freq)
{
    table_size_sinus = (int)((float)sample_rate / (float)freq);
    printf("table_size_sinus: %d\n", table_size_sinus);
    
    /* Table dynamic allocation */
    table_sinus = (float*)malloc(table_size_sinus * sizeof(float));
    
    /* Fill the table */
    // TODO
    
    /* Init the phase */
    phase_sinus = 0;
}

void destroy_sinus()
{
    /* Deallocate the table */
    free(table_sinus);
}

/* Copy 'nframes' samples from the table inside the output buffer and update the phase */
void process_sinus(float* output, int nframes)
{
    // TODO
}


void display_sinus()
{
    // TODO
}

int main()
{
    init_sinus(44100, 2000);
    display_sinus();
    
    // Simulate audio generation: generate a sequence of 500 samples
    printf("==================\n");
    printf("Simulate audio\n");
    
    // TODO
    
    return 0;
}
