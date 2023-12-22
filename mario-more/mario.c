#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n > 9 || n < 1)
    {
         n = get_int("Size? ");

    if (n < 1 || n > 9)
         printf("The amount of blocks needs to be between 1 and 8.\n");
     }
     {
     for (int i = 0; i < n; i++)
         printf("#\n");
     }
}
