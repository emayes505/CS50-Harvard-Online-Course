#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

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

int convert(string input)
    {
    int length = strlen(input);

        if (length == 1)
        {
            return 1;
        }
        else
        {
            for (int i = length - 1; i >= 0; i--)
            {
                
            }
        }
    }
