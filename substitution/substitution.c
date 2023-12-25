#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])

{
int length = strlen(argv[1]);

        if (argc != 2 || length != 26)
        {
                printf("Usage: ./substitution 'key' .\n");
                return 1;
        }
        string key = argv[1];
        for (int i = 0; i < length; i++)
                {
                if (!isalpha(key[i]))
                        {
                                printf("Invalid input. All characters must be alphabetic.\n");
                                return 1;
                        }
                }
        for (int i = 0; i < 25; i++)
        {
                for (int j = i + 1; j < 24; j++)
                {
                        if (toupper(key[i]) == toupper(key[j]))
                        {
                                printf("Duplicates characters.\n");
                                return 1;
                        }
                }
        }
        string plainText = get_string("Plain Text: ");
        int plength = strlength(plainText);
        for (int i = 0; i < plength; i++)
        {
                key = toupper(key);
                if (islower(plainText[i]))
                {
                        int character = plainText[i] - 97;
                        printf("%c", key[character] + 32);

                }
                else if (isupper(plainText[i]))
                {
                        int character = plainText[i] - 65;
                        printf("%c", key[character]);
                }
                else
                {
                        printf("%c", plaintext[i]);
                }
        }


}
