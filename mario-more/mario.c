#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hash = 0;

    while (hash > 9 || hash < 1)
    {
         hash = get_int("How many blocks? ");

         if (hash < 1 || hash > 9)
             printf("The amount of blocks needs to be between 1 and 8.\n");
     }
}
