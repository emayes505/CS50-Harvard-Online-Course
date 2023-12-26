#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input, int length);

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

int convert(string input, int length)
{
    if (length == 1){
        return input[0] - 48;
    }

    char last_digit = input[length - 1];

    int convert_ld = last_digit - 48;

    input[length - 1] = '\0';

    return convert_ld + 10 * convert(input);
}
