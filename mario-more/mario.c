#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n > 9 || n < 1)
    {
         n = get_int("How many blocks? ");

         if (n < 1 || n > 9)
             printf("The amount of blocks needs to be between 1 and 8.\n");
     }
}
