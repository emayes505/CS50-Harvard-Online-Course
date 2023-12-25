#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
if (argv[1] != 2)
    {
        printf("Invalid input. Usage: ./caesar 'key'.\n");
        return 1;
    }
    int key = get_int("Key: ");

if (!isdigit(key) || key < 0)
    {
    printf("Usage: ./caesar key.\n");
    return 1;
    }
string plainText = get_string("plaintext: ");

for (int i = 0, length = strlen(plainText); i < length; i++)
    {
        if (isupper(plainText[i]))
    }



}
