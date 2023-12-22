#include <cs50.h>
#include <stdio.h>

int main(void)  {
    int populationStart;

    //Get starting population

    do {
        populationStart = get_int("What is the starting population? ");

        if (populationStart < 9) {
            printf("Population size must be 9 or greater. Please try again.\n");
        }

    } while (populationStart < 9);

        int populationEnd = get_int("What is the ending population? ");


    // Now, populationStart contains a value greater than or equal to 9.
    // You can continue with the rest of your program.

    return 0;
}


    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years


