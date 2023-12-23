// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string replace(string input_string);


int main(int argc, string argv[])
{
    if (argc != 2)
        {printf("Input not valid. Enter only 1 word after ./no-vowels. Try again.");
        return 1;
        }
    {
        printf("%s\n", replace (argv[1]));
    }


string replace (input_string)
{
    int length = strlen(input_string);
    for (i=0, i < length, i++)
        {
            switch (toupper(input_string))

                case 'A':
                    input_string[i] = 54;
                case 'E':
                    input_string[i] =
                case 'I':
                case 'O':

        }
}


}
