#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])

{
int length = strlen(argv[1]);

        if (argc != 2, length != 26)
        {
                printf("Usage: ./substitution 'key' .\n");
                return 1;
        }
        string key = argv[1];
        for (int i = 0; i < length; i++)
        {
                if (!isalphakey[i])
                {
                        printf("Invalid input. All characters must be alphabetic.\n");
                        return 1;
                }
        }






}
