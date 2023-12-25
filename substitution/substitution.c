#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])

{
int length = strlen(argv[1]);

        if (argc != 2)
        {
                printf("Usage: ./substitution 'key' .\n");
                return 1;
        }
        if (length != 26)
        {
                printf("Key must contain 26 characters.\n");
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
        for (int i = 0; i < 26; i++)
        {
                for (int j = i + 1; j < 26; j++)
                {
                        if (toupper(key[i]) == toupper(key[j]))
                        {
                                printf("Duplicates characters.\n");
                                return 1;
                        }
                }
        }
        string plainText = get_string("plaintext: ");

        int plength = strlen(plainText);

        for (int i = 0; i < 26; i++)
        {
                {
                if (!isupper(key[i]))

                key[i] = key[i] + 32;

                }
        }

                printf("ciphertext: ");


        for (int i = 0; i < plength; i++)
        {
                if (islower(plainText[i]))
                {
                        int character = plainText[i] - 97;
                        printf("%c", tolower(key[character]));

                }
                else if (isupper(plainText[i]))
                {
                        int character = plainText[i] - 65;
                        printf("%c", key[character]);
                }
                else
                {
                        printf("%c", plainText[i]);
                }

        }
                printf("\n");



}
