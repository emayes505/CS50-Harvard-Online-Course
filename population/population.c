#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int start, end, years = 0;

    // Prompt for beginning population
    do
    {
        start = get_int("What is the starting llama Population? ");

        if (start < 9)
            printf("Starting population must be 9 or greater. Try again.\n");
    }
    while (start < 9);

    // Prompt for ending population
    do
    {
        end = get_int("What is the ending llama population? ");

        if (end < start)
            printf("Ending population must be larger than starting population. Try again.\n");
    }
    while (start > end);

    // Calculate num of years until starting population will reach ending population.
    while (start < end)
    {
        start = start + start / 3 - start / 4;
        years++;
    }

    // Tell user how long it will take for start population to reach the end population.

    {
        printf("Years: %d.\n", years);
    }
}
