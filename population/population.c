#include <cs50.h>
#include <stdio.h>

int main(void)  {

    int start, end, years = 0;

    //Prompt for beginning population
    do
    {
        printf("Starting population (minimum 9): " );
        scanf("%d", &start);

    }   while (start < 9);

    do
    {
        printf("Ending population (minimum %d): ", start);
        scanf("%d", &end);
    }
    while (start < end);
    {
        start - start + start / 3 - start / 4;
        years++;
    }

    printf("Years: %d\n", years);
    return 0;



}
