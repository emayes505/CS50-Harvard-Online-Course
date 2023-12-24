#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

if (argv[1] == NULL || length != 26 || argc != 2)

        {
        printf("Invalid, no input. Please enter key.\n");
        return 1;
        }

        string key = argv[1];
        for (int i = 0, length=strlen(key); i < length; i++)
        {
                if (!isalpha(key[i]))
                {
                        printf("Invalid input, all charcters must be alphabetical.\n");
                }
        }
}
