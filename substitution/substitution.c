#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])

{
if (argc != 2)
    {
        printf("Usage: ./solution key\n");
        return 1;
    }
    // cannot use argv[1] until we check to make sure it exsists, else we get segmentation fault.
    string key = argv[1];
    int length = strlen(key);
if (length!= 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    } // change key to all upper, also check to make sure all chars are alpha.
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
        } //check for duplicates in key.
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
     } // get plaintext.
     string plainText = get_string("plaintext: ");
     {
        printf("ciphertext: ");
     }
     // change plaintext to cipher.
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
