#include <cs50.h>
#include <stdio.h>

int main(void)  {
    int populationStart;

    //Get starting population

    do {
        populationStart = get_int("What is the starting population? ");

        if (populationStart < 9)
            printf("Population must be 9 or more. Please try again.\n");

    } while (populationStart > 9);

    return 0;

    //Get ending population

     int populationEnd = get_int ("what is the ending population? ");


    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

}
