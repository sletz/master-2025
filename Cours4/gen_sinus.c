 
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* Sinus generator */

float* table_sinus;
int table_size_sinus;
int phase_sinus;

float PI = 3.141572653;

/* Create and fill the table with a period of the signal */
void init_sinus(int sample_rate, int freq)
{
    table_size_sinus = (int)((float)sample_rate / (float)freq);
    printf("table_size_sinus: %d\n", table_size_sinus);
    
    /* Table dynamic allocation */
    table_sinus = (float*)malloc(table_size_sinus * sizeof(float));
    
    /* Fill the table */
    int i;
    for (i = 0; i < table_size_sinus; i = i+1) {
        table_sinus[i] = sin(2 * PI * (float)i/(float)table_size_sinus);
    }
    
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
    int i;
    for (i = 0; i < nframes; i = i+1) {
        output[i] = table_sinus[phase_sinus];
        phase_sinus = phase_sinus + 1;
        if (phase_sinus == table_size_sinus) {
            phase_sinus = 0;
        }
    }
}

/* Return 1 sample and update the phase  */
float process_one_sample_sinus()
{
    float res = table_sinus[phase_sinus];
    phase_sinus = phase_sinus + 1;
    if (phase_sinus == table_size_sinus) {
        phase_sinus = 0;
    }
    return res;
}

void display_sinus()
{
    int i;
    for (i = 0; i < table_size_sinus; i = i+1) {
        printf("Index = %d Sample = %f\n", i, table_sinus[i]);
    }
}

int main()
{
    init_sinus(44100, 2000);
    display_sinus();
    
    // Simulate producing an audio stream of 5 blocks of 128 samples
    printf("==================\n");
    printf("Simulate audio\n");
    
    int block = 0;
    float output[128];
    for (block = 0; block < 5; block++) {
        process_sinus(output, 128);
        int i;
        for (i = 0; i < 128; i = i+1) {
            printf("Block = %d sample = %f\n", block, output[i]);
        }
    }
    
    return 0;
}
