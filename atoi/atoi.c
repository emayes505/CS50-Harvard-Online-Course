#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input, int n);

int main(void)



{
    string input = get_string("Enter a positive integer: ");

    int n = strlen(input);

    for (int i = 0; i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input, int n)
{
    for (int i = n - 1; i >= 0 i++)
}