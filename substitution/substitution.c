#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
int length = 0;

if (argv[1] == NULL)
        {
        printf("Invalid, no input. Please enter key.\n");
        }
        return 1;
{
    string key = get_string("%s", argv[1]);

    length = strlen(key);
    do
    {
    if (length != 26)
        {
        printf("Invalid, Key must contain 26 characters. Try again.\n");
        return 1;
        }
    } while (length != 26);
    

}

}

