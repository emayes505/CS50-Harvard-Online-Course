#include <cs50.h>
#include <stdio.h>

int main(void)  {

    int start, end, years = 0;

    //Prompt for beginning population
    do
    {
        start = get_int("What is the starting llama Population? ");

        if (start < 9) printf("Starting population must be 9 or greater. Try again.\n");

    } while (start < 9);

    do
    {
        end = get_int("What is the ending llama population? ");

        if (end < start) printf("Ending population must be larger than starting population. Try again.\n");

    } while (end < start);

}


