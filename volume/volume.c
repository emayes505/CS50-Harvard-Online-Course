// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    //read header from input
    //write header to output
    //for each sample we read the sample from the input then multiply by factor after which write new sample to output.
    //use uint8_t for header of 44. use int16_t to represent the sample.
    float factor = atof(argv[3]);
    uint8_t header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    if (&fread == NULL)
    {
        printf("fread funtion didn't execute\n");
    }
    fwrite(header, HEADER_SIZE, 1, output);

    int16_t buffer;
    while (fread(&buffer, sizeof(int16_t), 1, input) != 0)
    {
        buffer *= factor;
        fwrite(&buffer,sizeof(int16_t), 1, output);
    }





    // TODO: Copy header from input file to output file

    // TODO: Read samples from input file and write updated data to output file

    // Close files
    fclose(input);
    fclose(output);
}
