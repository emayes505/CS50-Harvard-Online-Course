#include <cs50.h>
#include <stdio.h>

int main(void)  {

    int populationStart;
    int populationEnd;

    //Get starting population

    do {
        populationStart = get_int("What is the starting population? ");

        if (populationStart < 9)
        {
            printf("Population size must be 9 or greater. Please try again.\n");
        }
        //if starting population is greater than 9 we can continue and get ending population.

       } while (populationStart < 9);

        populationEnd = get_int("What is the ending population? ");


    return 0;

        // TODO: Calculate number of years until we reach threshold

    do {
        populationStart + populationStart/4 - populationStart/3;
    }



}



    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years


