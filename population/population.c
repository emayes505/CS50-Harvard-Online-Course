#include <cs50.h>
#include <stdio.h>

int main(void)  {
    int populationStart;

    //Get starting population
    do {
        populationStart = get_int ("What is the starting  popuilation size of the llamas? ");


        if (populationStart < 9)
            printf("Starting population must be 9 or greater. Please try again. \n");

    }while (populationStart < 9);

    return 0;

    //Get ending population
    int populationEnd = get_int ("what is the ending population size of the llamas? ");

}
    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

