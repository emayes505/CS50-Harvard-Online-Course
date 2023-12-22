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
    //Prompt for ending population
    do
    {
        end = get_int("What is the ending llama population? ");

        if (end < start) printf("Ending population must be larger than starting population. Try again.\n");
    //calculate num of years until starting population will reach ending population.
    } while (end < start);

       {
        do
        {
            start = start + start / 3 - start / 4;
            years++;

        }while (start < end);
       

       printf("It will take %d years for the llama population to reach %d llamas.\n", years, end);
       }
}
