#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])

{
string key = argv[1];
int length = strlen(key);
if (argc != 2)
    {
        printf("Usage: ./solution key\n");
        return 1;
    }
if (length!= 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for (int i = 0; i < 26; i++)
        {
            if (islower(key[i]))
            {
                key[i] = key[i] - 32;
            }
            else if (!isalpha(key[i]))
            {
                printf("All characters must be alphabetic.\n");
                return 1;
            }
        }
     for (int i = 0; i < 26; i++)
     {
            for (int j = i + 1; j < 25; j++)
            {
            if ((key[i]) == (key[j]))
            {
                printf("Duplicate in key.\n");
                return 1;
            }
            }
     }
     string plainText = get_string("plaintext: ");
     {
        printf("ciphertext: ");
     }
    int plength = strlen(plainText);
    for (int i = 0; i < plength; i++)
    {
        if (islower(plainText[i]))
        {
        int indexKey = plainText[i] - 97;
            printf("%c" , tolower(key[indexKey]));
        }
        else if (isupper(plainText[i]))
        {
        int indexKey = plainText[i] - 65;
             printf("%c", key[indexKey]);
        }
        else
        {
            printf("%c", plainText[i]);
        }
    }
        {
            printf("\n");
        }
        return 0;
    }
